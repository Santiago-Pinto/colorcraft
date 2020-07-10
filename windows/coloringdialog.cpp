#include "coloringdialog.h"
#include "ui_coloringdialog.h"
using std::string;

ColoringDialog::ColoringDialog(UIHandler& handler, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ColoringDialog),
    uiHandler(handler) {
    ui->setupUi(this);
    QPixmap pm("frame.jpg");
    pm = pm.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pm);
    this->setPalette(palette);
    setWindowTitle("Colorcraft");
    QStringList titles;
    titles <<"Lunes"<<"Martes"<<"Miercoles"<<"Jueves"<<"Viernes";
    uiHandler.setGridTitles(ui->scheduleGrd , titles);
    uiHandler.loadComboBoxWithCourses(ui->coursesCmbBox);
}

ColoringDialog::~ColoringDialog()
{
    delete ui;
}

void ColoringDialog::on_colorBtn_clicked() {
   ui->colorBtn->setEnabled(false);
   QApplication::processEvents();
   QString textEditText = ui->textEdit->toPlainText();
   string  numberOfTerms = textEditText.toUtf8().constData();
   uiHandler.getColoring(atoi(numberOfTerms.c_str()), ui->lblProcessing);
   ui->coursesCmbBox->setEnabled(true);
   ui->colorBtn->setEnabled(true);
   ui->coursesCmbBox->setCurrentIndex(1);
}


void ColoringDialog::on_exitBtn_clicked() {
    close();
}

void ColoringDialog::on_coursesCmbBox_currentTextChanged(const QString &arg1) {
  uiHandler.displayColoring(ui->scheduleGrd, ui->coursesCmbBox);
}
