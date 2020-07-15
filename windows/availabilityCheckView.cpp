#include "availabilityCheckView.h"
#include "ui_availabilitycheckview.h"
AvailabilityCheckView::AvailabilityCheckView(UIHandler& handler,
                                             QString& id,
                                             QString& name,QWidget *parent) :
    QDialog(parent), uiHandler(handler), id(id),
    ui(new Ui::AvailabilityCheckView) {
    ui->setupUi(this);
    QPixmap pm("whitebckg.jpg");
    pm = pm.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pm);
    this->setPalette(palette);
    setWindowTitle("Disponibilidad horaria " + name);
    QStringList titles;
    titles << "Lunes" << "Martes" << "Miercoles"<< "Jueves"<< "Viernes";
    uiHandler.setGridTitles(ui->grdAvailability, titles);
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
