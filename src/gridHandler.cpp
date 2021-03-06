#include "gridHandler.h"
#include <vector>
#include <QHeaderView>
#define NUMBER_OF_DAYS 5
using std::vector;
using std::string;
using std::to_string;

GridHandler::GridHandler() {
  //Ctor
}


GridHandler::~GridHandler() {
  //dtor
}

void GridHandler::clear(Grid*& grid) {
  grid->setRowCount(0);
  setResizeMode(grid);
}

void GridHandler::setResizeMode(Grid*& grid) {
  grid->setTextElideMode(Qt::ElideMiddle);
  grid->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  grid->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

/***************************PUBLIC******************************/
//Subject, Professor, Color
#include <iostream>
using namespace std;
void GridHandler::display(Grid*& grid, Coloring& coloring,
                                                      unsigned int dailyTerms) {
  this->clear(grid);
  vector<string> list = coloring.getAsStringList();
  vector<Node> nodes = coloring.getNodes();

  for (unsigned int i = 0; i < dailyTerms ; ++i)
    grid->insertRow(grid->rowCount());


  //Esta parte que sigue de codigo va a cambiar cuando el coloreo devuelva un vector de pares y no de getAsStringList
  for (unsigned int i = 0; i < list.size(); i+=4) {
    short color = atoi(list[i+3].c_str()) - 1;
    QString text = QString::fromStdString(list[i+1] + "\n" + list[i+2]);
    unsigned int row = color % dailyTerms;
    unsigned int column =  color / dailyTerms;
    grid->setItem(row, column, new QTableWidgetItem(text));
  }

  for (unsigned int i = 0; i < nodes.size(); ++i) {
    if(!nodes[i].meetsAllRestrictions()) {
      short color = nodes[i].getColor()-1;
      unsigned int row = color % dailyTerms;
      unsigned int col =  color / dailyTerms;
      this->paintCell(grid, row, col, Qt::yellow);
    }
  }
}


void GridHandler::display(Grid*& grid, Subject& subject) {
  setResizeMode(grid);
  QString id = QString::fromStdString(to_string(subject.getId()));
  QString name = QString::fromStdString(subject.getName());
  QString load = QString::fromStdString(to_string(subject.getLoad()));
  grid->insertRow(grid->rowCount());
  display(grid, grid->rowCount() - 1, 0, id);
  display(grid, grid->rowCount() - 1, 1, name);
  display(grid, grid->rowCount() - 1, 2, load);
}


void GridHandler::display(Grid*& grid, Professor& professor) {
  string strId = to_string(professor.getId());
  setResizeMode(grid);
  QString id = QString::fromStdString(strId);
  QString name = QString::fromStdString(professor.getName());
  QString subject = QString::fromStdString(professor.getSubject());
  grid->insertRow(grid->rowCount());
  display(grid, grid->rowCount() - 1, 0, id);
  display(grid, grid->rowCount() - 1, 1, name);
  display(grid, grid->rowCount() - 1, 2, subject);
}


void GridHandler::display(Grid*& grid, int row, int col, std::string item) {
  QString qItem = QString::fromStdString(item);
  display(grid, row, col, qItem);
}

void GridHandler::display(Grid*& grid, int row, int col, QString& item) {
  grid->setItem(row, col, new QTableWidgetItem(item));
}


void GridHandler::setTitles(Grid*& grid, QStringList& titles) {
  grid->setColumnCount(titles.size());
  grid->setHorizontalHeaderLabels(titles);
  this->setResizeMode(grid);
}

void GridHandler::paintCell(Grid*& grid, int row, int col, const QBrush& color){
  grid->item(row,col)->setBackground(color);
}

void GridHandler::giveFormat(Grid*& grid, int rows, int cols) {
  setResizeMode(grid);
  grid->setRowCount(rows);
  grid->setColumnCount(cols);

  for (int i = 0; i < rows; ++i){
    for (int j = 0; j < cols; ++j) {
      grid->setItem(i, j, new QTableWidgetItem(QString(" ")));
    }
  }
}
