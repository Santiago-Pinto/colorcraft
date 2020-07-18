#ifndef UIMESSAGEHANDLER_H_INCLUDED
#define UIMESSAGEHANDLER_H_INCLUDED
#include <QMessageBox>
#include <string>

class UiMessageHandler {
  private:

  public:
    UiMessageHandler();
    void displayWarning(std::string message);
    void displayError(std::string message);
};


#endif // UIMESSAGEHANDLER_H_INCLUDED
