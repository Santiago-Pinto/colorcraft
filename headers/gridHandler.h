#ifndef GRIDHANDLER_H_INCLUDED
#define GRIDHANDLER_H_INCLUDED
#include <QtWidgets/QTableWidget>
#include "coloring.h"
#include "subject.h"
typedef QTableWidget Grid;

class GridHandler {
  private:
    void format(Grid*& grid);

  public:
     GridHandler();
    ~GridHandler();

    //Displays the specified course schedule on the grid
    void display(Grid*& grid, Coloring& coloring);

    //Displays the specified subject on the grid
    void display(Grid*& grid, Subject& subject);

    //Displays the specified professor on the grid
    void display(Grid*& grid, Professor& professor);


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
