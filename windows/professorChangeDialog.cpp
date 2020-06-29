#include "professorChangeDialog.h"
#include "ui_professorChangeDialog.h"
#include "professorsDialog.h"
using std::string;

ProfessorChangeDialog::ProfessorChangeDialog(UIHandler& handler, QString& id,
        QString& name,QWidget *parent) : QDialog(parent), uiHandler(handler),
        ui(new Ui::ProfessorChangeDialog), profId(id) {
    ui->setupUi(this);
    QPixmap pm("whitebckg.jpg");
    pm = pm.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pm);
    this->setPalette(palette);
    setWindowTitle("Actualizar datos");
    QStringList titles;
    titles << "Lunes" << "Martes" << "Miercoles"<< "Jueves"<< "Viernes";
    uiHandler.setGridTitles(ui->grdAvailability, titles);
    uiHandler.displayAvailability(ui->grdAvailability, id);
    ui->txtName->setPlainText(name);
}

ProfessorChangeDialog::~ProfessorChangeDialog()
{
    delete ui;
}

void ProfessorChangeDialog::on_btnUpdate_clicked() {
  ui->btnUpdate->setEnabled(false);
  int rows = ui->grdAvailability->rowCount();
  int cols = ui->grdAvailability->columnCount();
  string availability;
  for (int col = 0; col < cols; ++col) {
    for (int row = 0; row < rows; ++row) {
      if (ui->grdAvailability->item(row, col)->background().color() == Qt::red)
        availability += '0';
      else
        availability += '1';
    }
  }
  QString name = ui->txtName->toPlainText();
  uiHandler.updateProfessor(this->profId, name, availability);
  ((ProfessorsDialog*)(parent()))->refresh();
  close();
}

void ProfessorChangeDialog::on_btnExit_clicked() {
    close();
}

void ProfessorChangeDialog::on_grdAvailability_cellClicked(int row, int col) {
  if(ui->grdAvailability->item(row, col)->background().color() == Qt::red)
    uiHandler.paintCell(ui->grdAvailability, row, col, Qt::green);
  else
    uiHandler.paintCell(ui->grdAvailability, row, col, Qt::red);
  ui->grdAvailability->setCurrentCell(-1,-1);
}
