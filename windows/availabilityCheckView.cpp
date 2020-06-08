#include "availabilityCheckView.h"
#include "ui_availabilitycheckview.h"
AvailabilityCheckView::AvailabilityCheckView(UIHandler& handler,
                                             QString& id,
                                             QString& name,QWidget *parent) :
    QDialog(parent), uiHandler(handler), id(id),
    ui(new Ui::AvailabilityCheckView) {
      ui->setupUi(this);
    setWindowTitle("Disponibilidad horaria " + name);
    ui->lblProfessor->setText("("+ id + ")" + " " + name);
    showAvailability();
}

void AvailabilityCheckView::showAvailability() {
  uiHandler.displayAvailability(ui->grdAvailability, this->id);
}

/************************* PUBLIC ********************************/
AvailabilityCheckView::~AvailabilityCheckView()
{
    delete ui;
}

void AvailabilityCheckView::on_btnExit_clicked() {
    close();
}
