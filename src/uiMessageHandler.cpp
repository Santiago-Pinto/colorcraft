#include "uiMessageHandler.h"
#define TITLE "Colorcraft"

UiMessageHandler::UiMessageHandler() {
  //ctor
}


void UiMessageHandler::displayWarning(std::string message) {
  QMessageBox msgBox;
  msgBox.setText(QString::fromUtf8(message.c_str()));
  msgBox.setWindowTitle(TITLE);
  msgBox.setIcon(QMessageBox::Warning);
  msgBox.exec();
}


void UiMessageHandler::displayError(std::string message) {
  QMessageBox msgBox;
  msgBox.setText(QString::fromUtf8(message.c_str()));
  msgBox.setWindowTitle(TITLE);
  msgBox.setIcon(QMessageBox::Critical);
  msgBox.exec();
}
