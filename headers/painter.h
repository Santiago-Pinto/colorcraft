#ifndef PAINTER_H_INCLUDED
#define PAINTER_H_INCLUDED
#include <string>
#include <vector>
#include <map>
#include "coloring.h"
#include "node.h"

typedef unsigned short uShort;
typedef std::vector<Node*> nodeVec;

class Painter {
  private:
    nodeVec nodes;
    Coloring lastColoring;
    //Searches between node's neighbors to choose a suitable label color.
    //It returns a non-negative number that represents the label assigned to the
    //node if everything goes fine.
    short chooseColor(Node* node);
    void resetColors();

    //Makes an initial coloring using a greedy heuristic
    Coloring startup(unsigned int numberOfIterations,
                            unsigned int colorBound, nodeVec& nodes);

  public:
    Painter();

    //Paints the graph using a greedy heuristic.
    //numberOfIterations is the number of times the algorithm will run,
    //always keeping the solution with the minimum functional value
    //It returns the coloring with the lowest functional it can find
    Coloring paint(unsigned int numberOfIterations, unsigned int colorBound, nodeVec& nodes);

    //Returns the last coloring made by the painter
    Coloring getLastColoring();

    /**Metodos para debuggear**/
    void printResult();
};


#endif // PAINTER_H_INCLUDED
