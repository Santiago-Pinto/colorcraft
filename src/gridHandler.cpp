#include "gridHandler.h"
#include <vector>
#include <QHeaderView>
#define NUMBER_OF_DAYS 5
#define NUMBER_OF_CLASSES 3
using std::vector;
using std::string;
using std::to_string;

GridHandler::GridHandler() {
  //Ctor
}


GridHandler::~GridHandler() {
  //dtor
}

void GridHandler::format(Grid*& grid) {
  grid->setRowCount(0);
  grid->setTextElideMode(Qt::ElideMiddle);
  grid->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

//Subject, Professor, Color
void GridHandler::display(Grid*& grid, Coloring& coloring) {
  this->format(grid);
  vector<string> list = coloring.getAsStringList();
  for (unsigned int i = 0; i < NUMBER_OF_CLASSES ; ++i)
    grid->insertRow(grid->rowCount());


  //Esta parte que sigue de codigo va a cambiar cuando el coloreo devuelva un vector de pares y no de getAsStringList
  for (unsigned int i = 0; i < list.size(); i+=4) {
    short color = atoi(list[i+3].c_str()) - 1;
    QString text = QString::fromStdString(list[i+1] + "\n" + list[i+2]);
    unsigned int row = color % NUMBER_OF_CLASSES;
    unsigned int column =  color / NUMBER_OF_CLASSES;
    grid->setItem(row, column, new QTableWidgetItem(text));
  }
}

void GridHandler::display(Grid*& grid, Subject& subject) {
  grid->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  QString id = QString::fromStdString(to_string(subject.getId()));
  QString name = QString::fromStdString(subject.getName());
  QString load = QString::fromStdString(to_string(subject.getLoad()));
  grid->insertRow(grid->rowCount());
  grid->setItem(grid->rowCount() - 1, 0, new QTableWidgetItem(id));
  grid->setItem(grid->rowCount() - 1, 1, new QTableWidgetItem(name));
  grid->setItem(grid->rowCount() - 1, 2, new QTableWidgetItem(load));

}

void GridHandler::display(Grid*& grid, Professor& professor) {
  string strId = to_string(professor.getId());
  grid->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  QString id = QString::fromStdString(strId);
  QString name = QString::fromStdString(professor.getName());
  QString subject = QString::fromStdString(professor.getSubject());
  grid->insertRow(grid->rowCount());
  grid->setItem(grid->rowCount() - 1, 0, new QTableWidgetItem(id));
  grid->setItem(grid->rowCount() - 1, 1, new QTableWidgetItem(name));
  grid->setItem(grid->rowCount() - 1, 2, new QTableWidgetItem(subject));
}


void GridHandler::setTitles(Grid*& grid, QStringList& titles) {
  grid->setColumnCount(titles.size());
  grid->setHorizontalHeaderLabels(titles);
}

void GridHandler::paintCell(Grid*& grid, int row, int col, const QBrush& color){
  grid->item(row,col)->setBackground(color);
}

void GridHandler::giveFormat(Grid*& grid, int rows, int cols) {
  grid->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->setRowCount(rows);
  grid->setColumnCount(cols);

  for (int i = 0; i < rows; ++i){
    for (int j = 0; j < cols; ++j) {
      grid->setItem(i, j, new QTableWidgetItem(QString(" ")));
    }
  }
}
