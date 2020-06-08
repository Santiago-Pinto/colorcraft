#include "uiHandler.h"
#include "parser.h"
#define WEEK_DAYS 5
#define NUMBER_OF_CLASSES 3
using std::vector;
using std::string;

string UIHandler::convertToStdString(QString& qString) {
  return qString.toUtf8().constData();
}

/**********************PUBLIC METHODS*************************************/
UIHandler::UIHandler() {
  //Ctor
}

UIHandler::~UIHandler() {
  //Dtor
}


void UIHandler::setGridTitles(Grid*& grid, QStringList& titles) {
  this->gridHandler.setTitles(grid, titles);
}


void UIHandler::displayColoring(Grid*& grid, QComboBox*& cmbBox) {
  string course = this->cmbHandler.getValue(cmbBox);
  Coloring coloring = this->system.getCourseColoring(course);
  this->gridHandler.display(grid, coloring);
}


void UIHandler::displaySubjects(Grid*& grid) {
  vector<Subject> subjects = this->system.getSubjectsList();
  for (auto subject: subjects)
    this->gridHandler.display(grid, subject);
}

void UIHandler::getColoring(unsigned int colorBound) {
  this->system.colorGraph(colorBound);
}

string UIHandler::getComboBoxValue(QComboBox*& cmbBox) {
   return this->cmbHandler.getValue(cmbBox);
}

void UIHandler::loadComboBoxWithCourses(QComboBox*& cmbBox) {
   for(auto item: this->system.getCourses())
      cmbHandler.addItem(cmbBox, item);
}

void UIHandler::loadComboBoxWithSubjects(QComboBox*& cmbBox) {
   for(auto item: this->system.getSubjects())
      cmbHandler.addItem(cmbBox, item);
}

//                 Subjects methods
void UIHandler::newSubject(QString& name, QString& load) {
  string strLoad = convertToStdString(load);
  string strName = convertToStdString(name);
  this->system.newSubject(strName, strLoad);
}

void UIHandler::updateSubject(QString& name, QString& load) {
  string strLoad = convertToStdString(load);
  string strName = convertToStdString(name);
  this->system.updateSubject(strName, strLoad);
}

void UIHandler::deleteSubject(QString& subject) {
  string subjectName = convertToStdString(subject);
  system.deleteSubject(subjectName);
}

//                 Professors methods
void UIHandler::displayProfessors(Grid*& grid) {
  vector<Professor> professors = system.getProfessorsList();
  for (auto professor: professors)
    gridHandler.display(grid, professor);
}

void UIHandler::deleteProfessor(QString& id) {
  string profId = convertToStdString(id);
  system.deleteProfessor(profId);
}


void UIHandler::displayAvailability(Grid*& grid, QString& id) {
  vector<Professor> professors = system.getProfessorsList();
  Professor target;
  for (Professor professor: professors){
    if (professor.getId() == atoi(convertToStdString(id).c_str())) {
      target = professor;
    }
  }

  string availability = target.getAvailability();
  gridHandler.giveFormat(grid, availability.size()/WEEK_DAYS, WEEK_DAYS);
  for (unsigned int i = 0; i < availability.size(); ++i) {
    int row = i % NUMBER_OF_CLASSES;
    int col =  i / NUMBER_OF_CLASSES;
    if (availability[i]- '0')
      gridHandler.paintCell(grid,row,col,Qt::green);
    else
      gridHandler.paintCell(grid,row,col,Qt::red);
  }
}

//                 Assignments methods
void UIHandler::displayAssignments(Grid*& grid) {
  vector<string> assignments = system.getAssignments();
  gridHandler.giveFormat(grid, assignments.size(), 3);//3 is the number of fields retrieved
  for (unsigned int row = 0; row < assignments.size(); ++row) {
    for (unsigned int col = 0; col < 3; ++col){
      gridHandler.display(grid, row, col,
                                parser::parseAssignment(assignments[row], col));
    }
  }
}

void UIHandler::deleteAssignment(QString& course,QString& professor,
                                 QString& subject) {
  string strCourse = convertToStdString(course);
  string strProfessor = convertToStdString(professor);
  string strSubject = convertToStdString(subject);
  system.deleteAssignment(strCourse, strProfessor, strSubject);
}

//                 Appearance methods
void UIHandler::paintCell(Grid*& grid, int row, int col, const QBrush& color) {
  gridHandler.paintCell(grid, row, col, color);
}
