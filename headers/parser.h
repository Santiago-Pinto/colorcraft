#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED

#include <vector>
#include "professor.h"
#include "assignment.h"
#include "subject.h"

class parser {
  private:

  public:
    static std::vector<Professor> parseProfessors(
                                            std::vector<std::string>& pRecords);

    static std::vector<Assignment> parseAssignments(
                                            std::vector<std::string>& pRecords);

    static std::vector<Subject> parseSubjects(
                                            std::vector<std::string>& pRecords);

    static std::vector<std::string> parseCourses(
                                            std::vector<std::string>& cRecords);


    static std::vector<std::string> parseColoring(std::string& node);

    //Returns the value of the specified field in an assignment
    static std::string parseAssignment(std::string& assignment, int field);

};
#endif // PARSER_H_INCLUDED
