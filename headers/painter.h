#ifndef PAINTER_H_INCLUDED
#define PAINTER_H_INCLUDED
#include <string>
#include <vector>
#include "coloring.h"
#include "node.h"

typedef unsigned short uShort;
typedef std::vector<Node*> nodeVec;

class Painter {
  private:
    //Searches between node's neighbors to choose a suitable label color.
    //It returns a non-negative number that represents the label assigned to the
    //node if everything goes fine.
    short chooseColor(Node* node);
    void resetColors(nodeVec& nodes);

    //Makes an initial coloring using a greedy heuristic
    Coloring startup(unsigned int numberOfIterations,
                            unsigned int colorBound, nodeVec nodes);
    //Attempts to improve de functional by swapping colors from certain nodes
    //Returns the next color viable in a progression between (0, top)
    Coloring colorSwap(Coloring& coloring);
    void reorder(std::vector<short>& colors);

    //From a set of colorings, it returns the one with the lowest functional
    Coloring getMinimum(std::vector<Coloring>& colorings);


  public:
    Painter();
    Painter(unsigned int numberOfIterations, unsigned int colorBound, nodeVec& nodes);

    //Paints the graph using a heuristic.
    //numberOfIterations is the number of times the algorithm will run,
    //always keeping the solution with the minimum functional value
    //It returns the coloring with the lowest functional it can find
    Coloring paint(unsigned int numberOfIterations, unsigned int colorBound, nodeVec& nodes);
};


#endif // PAINTER_H_INCLUDED
