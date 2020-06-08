#include "parser.h"
using std::string;
using std::vector;

string paste(vector<string>& records) {
  string aux; //unico string donde meto todos los registros
  for (unsigned int j = 0; j < records.size(); ++j)
    aux += records[j];
  return aux;
}

vector<Professor> parser::parseProfessors(vector<string>& pRecords) {

  vector<Professor> professors;
  vector<string> v;
  size_t begin = 0;
  size_t end = 0;
  string records = paste(pRecords);

  while(end < records.size() - 1){
    for (unsigned int j = 0; j < 4; ++j) {
      begin = records.find(":", end);
      end = records.find(" ", begin);
      v.push_back(records.substr(begin + 1, end - begin -1));
   }
  }

  unsigned int i = 0;
  while (i < v.size()) {
    professors.push_back(Professor(std::stoi(v[i]),v[i+1],v[i+2], v[i+3]));
    i += 4;
  }
  return professors;
}

vector<Assignment> parser::parseAssignments(vector<string>& aRecords) {

  vector<Assignment> assignments;
  vector<string> v;
  size_t begin = 0;
  size_t end = 0;
  string records = paste(aRecords);

  while(end < records.size() - 1){
    for (unsigned int j = 0; j < 2; ++j) {
      begin = records.find(":", end);
      end = records.find(" ", begin);
      v.push_back(records.substr(begin + 1, end - begin -1));
   }
  }

  unsigned int i = 0;
  while (i < v.size()) {
    assignments.push_back(Assignment(std::stoi(v[i]),v[i+1]));
    i += 2;
  }
  return assignments;
}

vector<Subject> parser::parseSubjects(vector<string>& sRecords) {
  vector<Subject> subjects;
  vector<string> v;
  size_t begin = 0;
  size_t end = 0;
  string records = paste(sRecords);

  while(end < records.size() - 1){
    for (unsigned int j = 0; j < 3; ++j) {
      begin = records.find(":", end);
      end = records.find(" ", begin);
      v.push_back(records.substr(begin + 1, end - begin -1));
   }
  }

  unsigned int i = 0;
  while (i < v.size()) {
    subjects.push_back(Subject(std::stoi(v[i]),v[i+1],std::stoi(v[i+2])));
    i += 3;
  }
  return subjects;
}

vector<string> parser::parseCourses(vector<string>& cRecords) {

  vector<string> courses;
  size_t begin = 0;
  size_t end = 0;

  for (unsigned int i = 0; i<cRecords.size(); ++i) {
    begin = cRecords[i].find(":", 0);
    end = cRecords[i].size();
    courses.push_back(cRecords[i].substr(begin + 1, end - begin -2));
  }
  return courses;
}

vector<string> parser::parseColoring(string& node) {
  vector<string> coloringString;
  size_t begin = 0;
  size_t end = 0;

  begin = node.find("-", 0);
  coloringString.push_back(node.substr(0, begin)); //Course
  end = node.find("-", begin + 1);
  coloringString.push_back(node.substr(begin + 1, end - begin -1)); //Subject

  begin = end;
  end = node.find("(", begin);
  coloringString.push_back(node.substr(begin + 1, end - begin -1)); //Professor

  begin = node.find(" ", node.find(":",end));
  end = node.find(",", begin);
  coloringString.push_back(node.substr(begin + 1, end - begin - 1)); //Color

  return coloringString;
}
