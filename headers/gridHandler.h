#ifndef GRIDHANDLER_H_INCLUDED
#define GRIDHANDLER_H_INCLUDED
#include <QtWidgets/QTableWidget>
#include "coloring.h"
#include "subject.h"
#include <vector>
typedef QTableWidget Grid;

class GridHandler {
  private:
    void clear(Grid*& grid);
    //Sets the horizontal and vertical resize mode to stretch
    void setResizeMode(Grid*& grid);

  public:
     GridHandler();
    ~GridHandler();

    //Displays the specified course schedule on the grid
    void display(Grid*& grid, Coloring& coloring);

    //Displays the specified subject on the grid
    void display(Grid*& grid, Subject& subject);

    //Displays the specified professor on the grid
    void display(Grid*& grid, Professor& professor);

    //Displays the specified item on the grid
    //The cell where the content is displayed depends on the arguments passed
    void display(Grid*& grid, int row, int col, std::string item);

    void display(Grid*& grid, int row, int col, QString& item);

    //Sets grid column titles to those passed in the second argument
    void setTitles(Grid*& grid, QStringList& titles);

    //Paints a grid's cell with the color on the last parameter
    //The specified cell will be that one at the row and column passed by
    // the second and third argument
    void paintCell(Grid*& grid, int row, int col, const QBrush& color);

    //Makes grid a rows*cols QTableWidget
    void giveFormat(Grid*& grid, int rows, int cols);

};
#endif // GRIDHANDLER_H_INCLUDED
