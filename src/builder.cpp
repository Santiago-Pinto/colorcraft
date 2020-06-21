#include "builder.h"
using std::vector;
using std::map;
using std::make_pair;
using std::string;
using std::pair;
using std::to_string;

bool Builder::conflict(Node* aNode, Node* otherNode) {
  string firstCourse, secondCourse;
  unsigned int firstProfessor, secondProfessor;

  size_t course = aNode->getLabel().find("-", 0);
  firstCourse = aNode->getLabel().substr(0, course - 1);
  course = otherNode->getLabel().find("-", 0);
  secondCourse = otherNode->getLabel().substr(0, course - 1);

  firstProfessor = aNode->getProfId();
  secondProfessor = otherNode->getProfId();

  return ((firstCourse == secondCourse) || (firstProfessor == secondProfessor));
}

/**************************************************/
void Builder::setup(vector<Professor>& professors,
                    vector<Assignment>& assignments,
                    vector<Subject>& subjects) {

  this->nodes.clear();
  this->professors.clear();
  this->subjects.clear();
  this->assignments.clear();

  for (auto professor : professors)
    this->professors.emplace(pair<unsigned int, Professor>
                                                (professor.getId(), professor));


  for (auto assignment : assignments)
    this->assignments.emplace(make_pair(
         make_pair(assignment.getProfId(), assignment.getGroup()), assignment));

  for (auto subject : subjects)
    this->subjects.emplace(pair<string, Subject> (subject.getName(), subject));
}
/**************************************************/


Builder::Builder() {
    //Ctor
}

Builder::~Builder() {
  for (auto node: this->nodes)
    delete node;
}

/********************************************/
vector<Node*> Builder::build(vector<Professor>& professors,
                             vector<Assignment>&assignments,
                             vector<Subject>& subjects) {

  this->setup(professors, assignments, subjects);
  this->buildNodes();
  this->buildEdges();
  this->addPenalties();
  return this->nodes;
}

/********************************************/
void Builder::buildNodes() {
  string label;
  for (auto pair: this->professors){
    Professor professor = pair.second;
    Subject subject = this->subjects.find(professor.getSubject())->second;

    for (auto assignmentPair: this->assignments) {
      Assignment assignment = assignmentPair.second;
      if (assignment.getProfId() == professor.getId()) {
        label += assignment.getGroup() + "-";
        label += subject.getName()+ "-";
        label += professor.getName()+ "(" + to_string(professor.getId()) + ")";
        for (unsigned int i = 0; i<subject.getLoad(); ++i) {
          this->nodes.push_back(new Node(label, professor.getId()));
        }
        label = "";
      }
    }
  }
}

void Builder::buildEdges() {
  for (unsigned int i = 0; i < this->nodes.size(); ++i) {
    for (unsigned int j = i+1; j < this->nodes.size(); ++j) {
      if (conflict(this->nodes[i], this->nodes[j])) {
        this->nodes[i]->addNeighbor(*this->nodes[j]);
        this->nodes[j]->addNeighbor(*this->nodes[i]);
      }
    }
  }
}

void Builder::addPenalties() {
  for (auto pair: this->professors){
    Professor professor = pair.second;
    for (unsigned int i = 0; i < this->nodes.size(); ++i){
      if (this->nodes[i]->getProfId() == professor.getId()) {
        string availability = professor.getAvailability();
        for (unsigned int j = 0; j < availability.size(); ++j) {
          if (!(availability[j] - '0')) {
            this->nodes[i]->addPenalty(j+1);
          }
        }
      }
    }
  }
}
