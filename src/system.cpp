#include "system.h"
#include "node.h"
#define DB_NAME "ColorcraftDB.db"
#define ITERATION_LIMIT 1000
using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::set;
using std::to_string;


System::System() {
  vector<string> pRecords, aRecords, sRecords, cRecords;
  dataHandler.connect(DB_NAME);
  dataHandler.execute("SELECT * FROM profesor;", pRecords);
  dataHandler.execute("SELECT * FROM asignaciones;", aRecords);
  dataHandler.execute("SELECT * FROM materias;", sRecords);
  dataHandler.execute("SELECT DISTINCT curso FROM asignaciones", cRecords);

  this->subjectRecords = parser::parseSubjects(sRecords);
  this->professorRecords = parser::parseProfessors(pRecords);
  this->assignmentRecords = parser::parseAssignments(aRecords);
  this->courseRecords = parser::parseCourses(cRecords);
}

System::~System() {
  //Dtor
}

void System::colorGraph(unsigned int colorBound) {
  vector<Node*> nodes = this->builder.build(professorRecords,
                                            assignmentRecords,
                                            subjectRecords);

  Coloring coloring = painter.paint(ITERATION_LIMIT, colorBound, nodes);
  if (coloring.getNumberOfColorsUsed() > colorBound)
    cout<< "Se supero la cantidad de colores asignados" << endl;
  else {
    coloring.print();
    this->lastColoring = coloring;
  }
}

Coloring System::getCourseColoring(string& course) {
  Coloring courseColoring = this->lastColoring.getCourseColoring(course);
  return courseColoring;
}

vector<Subject> System::getSubjectsList() {
  return this->subjectRecords;
}

vector<Professor> System::getProfessorsList() {
  return this->professorRecords;
}

vector<Professor> System::getProfessors(string subject) {
  vector<Professor> records;
  for (Professor p: this->professorRecords) {
    if (p.getSubject() == subject)
      records.push_back(p);
  }
  return records;
}



vector<string> System::getCourses() {
  return this->courseRecords;
}

vector<string> System::getSubjects() {
  set<string> subjects;
  for (auto professor: this->professorRecords) {
    string subject = professor.getSubject();
    if (subjects.find(subject) == subjects.end())
      subjects.insert(subject);
  }
  vector<string> v(subjects.begin(), subjects.end());
  return v;
}

void System::newSubject(string& name, string& load) {
    string query = "INSERT INTO materias (nombre, carga)";
           query+= "VALUES ('" + name + "','" + load + "');";
    dataHandler.execute(query);
    refreshSubjects();
}

void System::updateSubject(string& name, string& load) {
  string query = "UPDATE materias";
         query+= " SET carga =" + load;
         query+= " WHERE nombre='" + name + "';";
  dataHandler.execute(query);
  refreshSubjects();
}

void System::deleteSubject(std::string& subjectName) {
  string query = "DELETE FROM materias WHERE nombre='" + subjectName+"';";
  dataHandler.execute(query);

  query = "SELECT * FROM profesor WHERE materia='"+ subjectName + "';";
  vector<string> pRecords;
  dataHandler.execute(query, pRecords);
  if (pRecords.size()) {
    vector<Professor> professors = parser::parseProfessors(pRecords);
    for (auto record: professors) {
      string id = to_string(record.getId());
      dataHandler.execute("DELETE FROM asignaciones WHERE profId='" +id+ "';");
    }

    query = "DELETE FROM profesor WHERE materia='" + subjectName + "';";
    dataHandler.execute(query);
  }
  refreshSubjects();
}


void System::refreshSubjects() {
  vector<string> sRecords;
  dataHandler.execute("SELECT * FROM materias;", sRecords);
  this->subjectRecords = parser::parseSubjects(sRecords);
}

//                    Professor methods
void System::deleteProfessor(std::string& profId) {
  dataHandler.execute("DELETE FROM profesor WHERE legajo='" + profId +"';");
  dataHandler.execute("DELETE FROM asignaciones WHERE profId='" +profId+ "';");
  refreshProfessors();
}

void System::refreshProfessors() {
  vector<string> pRecords;
  dataHandler.execute("SELECT * FROM profesor;", pRecords);
  this->professorRecords = parser::parseProfessors(pRecords);
}

//                    Assignments METHODS
vector<string> System::getAssignments() {
  string query = "SELECT asignaciones.curso,profesor.nombre, profesor.materia "
                  "FROM asignaciones INNER JOIN  profesor "
                  "ON asignaciones.profId=profesor.legajo "
                  "ORDER BY asignaciones.curso";
  vector<string> records;
  dataHandler.execute(query, records);
  return records;
}


void System::newAssignment(string& course, string& profId) {
  string query = "INSERT INTO asignaciones (profId, curso) "
                 "VALUES ("+ profId +", '" + course + "');";
  dataHandler.execute(query);
}


void System::deleteAssignment(string& strCourse,
                              string& strProfessor,string& strSubject) {
  string query = "DELETE FROM asignaciones "
                  "WHERE curso||''||profId IN ("
                  "SELECT curso||''||profId as id FROM asignaciones "
                  "INNER JOIN profesor "
                  "ON (asignaciones.profId=profesor.legajo) "
                  "WHERE  nombre='" + strProfessor +
                  "' AND materia='" + strSubject +
                  "' AND curso='" +strCourse + "');";
  dataHandler.execute(query);
}
