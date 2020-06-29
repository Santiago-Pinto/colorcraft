#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED

#include "builder.h"
#include "painter.h"
#include "dbHandler.h"
#include "coloring.h"
#include "professor.h"
#include "assignment.h"
#include "subject.h"
#include "parser.h"
#include <vector>

class System {
  private:
    Builder builder;
    dbHandler dataHandler;
    Painter painter;
    Coloring lastColoring;
    std::vector<Subject> subjectRecords;
    std::vector<Assignment> assignmentRecords;
    std::vector<Professor> professorRecords;
    std::vector<std::string> courseRecords;
    void refreshSubjects();
    void refreshProfessors();


  public:
    System();
    ~System();
    void colorGraph(unsigned int colorBound);
    Coloring getCourseColoring(std::string& course);
    std::vector<Subject> getSubjectsList();
    std::vector<Professor> getProfessorsList();
    std::vector<std::string> getCourses();
    std::vector<std::string> getSubjects();
    std::vector<Professor> getProfessors(std::string subject);

    //Subject methods
    void newSubject(std::string& name, std::string& load);
    void updateSubject(std::string& name, std::string& load);
    void deleteSubject(std::string& subjectName);

    //Professor methods
    void newProfessor(std::string name, std::string subject,
                                        std::string availability);
    void deleteProfessor(std::string& profId);

    void updateProfessor(std::string& id,
                         std::string& name,
                         std::string& availability);


    //Assignments methods
    std::vector<std::string> getAssignments();
    void newAssignment(std::string& course, std::string& professor);
    void deleteAssignment(std::string& strCourse,
                          std::string& strProfessor,
                          std::string& strSubject);

};


#endif // SYSTEM_H_INCLUDED
