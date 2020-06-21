#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED
#include <string>
#include <set>
#include <vector>
#include "professor.h"
#define PENALTY 10

class Node {
  private:
    std::string label;
    std::set<short> penalties; //The colors that would be nice this node didn't take
    std::vector<Node*> adjacents; //labels of the adjacent nodes
    short color;
    unsigned int profId;

  public:
    Node(std::string label, unsigned int profId);
    void addNeighbor(Node& other); //pensarlo como "double dispatch", estaria bueno

    //Asigns a color to the current node and returns an int representing
    //the penalty (if any) for doing so
    int assignColor(short color);

    // Returns the "color" (or label) assigned to the node. If the node doesn't
    // have  its color set yet, it will return 0
    short getColor();
    unsigned short getGrade();
    std::string getLabel();
    unsigned int getProfId();
    std::string getCourse();

    //Sets the color passed by argument as one the node can, but
    //should not take
    void addPenalty(short color);

    bool meetsAllRestrictions();

    std::vector<Node*>& getAdjacents();

    /********* Metodos usados para debuggear, borrar despues ****************/
    void printInfo();
    void printPenalties();
};


#endif // NODE_H_INCLUDED
