#include "uiMessageHandler.h"

UiMessageHandler::UiMessageHandler() {
  //ctor
}

void UiMessageHandler::displayWarning(std::string message) {
  QMessageBox msgBox;
  msgBox.setIcon(QMessageBox::Warning);
  msgBox.setText(QString::fromUtf8(message.c_str()));
  msgBox.setWindowTitle("Colorcraft");
  msgBox.exec();
}
