#ifndef UIHANDLER_H_INCLUDED
#define UIHANDLER_H_INCLUDED
#include "gridHandler.h"
#include "comboBoxHandler.h"
#include "system.h"

/**This class has no behavior, i don't like it, but felt like needed to
   map database records**/
class UIHandler {
  private:
    GridHandler gridHandler;
    CmbBoxHandler cmbHandler;
    System system;
    std::string convertToStdString(QString& qString);

  public:
    UIHandler();
    ~UIHandler();


    void setGridTitles(Grid*& grid, QStringList& titles);
    //Displays the coloring on the grid passed on the first argument, depending
    //On the content of the combo box
    void displayColoring(Grid*& grid, QComboBox*& cmbBox);
    void displaySubjects(Grid*& grid);

    void getColoring(unsigned int colorBound);
    std::string getComboBoxValue(QComboBox*& cmbBox);

    //Combo box methods
    void loadComboBoxWithCourses(QComboBox*& cmbBox);
    void loadComboBoxWithSubjects(QComboBox*& cmbBox);
    void loadComboBoxWithProfessors(QComboBox*& cmbProfessor,
                                    QComboBox*& cmbSubject);

    //Subject methods
    void newSubject(QString& name, QString& load);
    void updateSubject(QString& name, QString& load);
    void deleteSubject(QString& subject);

    //Professors methods
    void displayProfessors(Grid*& grid);
    void deleteProfessor(QString& id);
    void displayAvailability(Grid*& grid, QString& id);

    //Assignments methods
    void newAssignment(QComboBox*& cmbCourse, QComboBox*& cmbProfessor);
    void displayAssignments(Grid*& grid);
    void deleteAssignment(QString& course,QString& professor,QString& subject);

    //Grid parameter related methods
    void paintCell(Grid*& grid, int row, int col, const QBrush& color);

};
#endif // UIHANDLER_H_INCLUDED
