#ifndef UIHANDLER_H_INCLUDED
#define UIHANDLER_H_INCLUDED
#include "animationHandler.h"
#include "gridHandler.h"
#include "uiMessageHandler.h"
#include "comboBoxHandler.h"
#include "system.h"

/**This class has no behavior, i don't like it, but felt like needed to
   map database records**/
class UIHandler {
  private:
    GridHandler gridHandler;
    CmbBoxHandler cmbHandler;
    AnimationHandler animationHandler;
    UiMessageHandler uiMessageHandler;
    System system;
    std::string convertToStdString(QString& qString);
    void showProcessingAnimation(QLabel* label);
    void stopProcessingAnimation(QLabel* label);


  public:
    UIHandler();
    ~UIHandler();


    void setGridTitles(Grid*& grid, QStringList& titles);
    //Displays the coloring on the grid passed on the first argument, depending
    //On the content of the combo box
    void displayColoring(Grid*& grid, QComboBox*& cmbBox);
    void displaySubjects(Grid*& grid);

    void getColoring(unsigned int colorBound, QLabel* label);
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
    void newProfessor(QString& name, QComboBox*& cmbBox,
                                     std::string& availability);
    void displayProfessors(Grid*& grid);
    void deleteProfessor(QString& id);
    void displayAvailability(Grid*& grid, QString& id);

    void updateProfessor(QString& id,
                         QString& name,
                         std::string& availability);

    //Assignments methods
    void newAssignment(QComboBox*& cmbCourse, QComboBox*& cmbProfessor);
    void displayAssignments(Grid*& grid);
    void deleteAssignment(QString& course,QString& professor,QString& subject);

    //Grid parameter related methods
    void paintCell(Grid*& grid, int row, int col, const QBrush& color);
    void formatGrid(Grid*& grid);
    void paintGrid(Grid*& grid, const QBrush& color);
};
#endif // UIHANDLER_H_INCLUDED
