#ifndef COLORING_H_INCLUDED
#define COLORING_H_INCLUDED
#include <string>
#include <vector>
#include "node.h"

class Coloring {
  private:
    std::vector<std::string> strNodes;
    std::vector<Node> nodes; //*

  public:
    Coloring();
    Coloring(std::vector<std::string>& nodes);
    Coloring(std::vector<Node>& nodes); //*
    short getNumberOfColorsUsed();
    unsigned int getFunctional();
    void addPaintedNode(Node* node);
    void clear();
    std::vector<Node> getNodes();
    std::vector<std::string> getAsStringList();
    //Returns a subcoloring containing only the items from a certain course
    Coloring getCourseColoring(std::string course);
    void print();

    //For debugging purposes
    void printAdjInfo();
};


#endif // COLORING_H_INCLUDED
