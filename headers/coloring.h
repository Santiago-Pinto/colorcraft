#ifndef COLORING_H_INCLUDED
#define COLORING_H_INCLUDED
#include <string>
#include <vector>
#include "node.h"

class Coloring {
  private:
    std::vector<std::string> nodes;
    short numberOfColorsUsed;
    unsigned int functional;

  public:
    Coloring();
    Coloring(std::vector<std::string>& nodes);
    void setNumberOfColorsUsed(short number);
    short getNumberOfColorsUsed();
    void setFunctional(unsigned int functional);
    unsigned int getFunctional();
    void addPaintedNode(Node* node);
    void clear();
    std::vector<std::string> getAsStringList();
    //Returns a subcoloring containing only the items from a certain course
    Coloring getCourseColoring(std::string course);
    void print();
};


#endif // COLORING_H_INCLUDED
