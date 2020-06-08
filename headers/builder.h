#ifndef BUILDER_H_INCLUDED
#define BUILDER_H_INCLUDED

#include <map>
#include "professor.h"
#include "subject.h"
#include "assignment.h"
#include "node.h"
#include <string>


class Builder {
  private:
    std::map<unsigned int, Professor> professors;
    std::map<std::string, Subject> subjects;
    std::map<std::pair<unsigned int, std::string>, Assignment> assignments;
    std::vector<Node*> nodes;
    void buildNodes();
    void buildEdges();
    void addPenalties();
    bool conflict(Node* aNode, Node* otherNode);
    void setup(std::vector<Professor>& professors,
               std::vector<Assignment>& assignments,
               std::vector<Subject>& subjects);


  public:
    Builder();
    ~Builder();
    //Builds the graph
    std::vector<Node*> build(std::vector<Professor>& professors,
                             std::vector<Assignment>& assignments,
                             std::vector<Subject>& subjects);
};
#endif // BUILDER_H_INCLUDED
