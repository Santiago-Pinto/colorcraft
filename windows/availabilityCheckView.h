#ifndef AVAILABILITYCHECKVIEW_H
#define AVAILABILITYCHECKVIEW_H

#include <QDialog>
#include "uiHandler.h"

namespace Ui {
class AvailabilityCheckView;
}

class AvailabilityCheckView : public QDialog
{
    Q_OBJECT

public:
    explicit AvailabilityCheckView(UIHandler& handler,
                                   QString& id,
                                   QString& name,
                                   QWidget *parent = nullptr);
    ~AvailabilityCheckView();

private slots:
    void on_btnExit_clicked();
private:
    Ui::AvailabilityCheckView *ui;
    UIHandler& uiHandler;
    QString id;
    void showAvailability();
};

#endif // AVAILABILITYCHECKVIEW_H
