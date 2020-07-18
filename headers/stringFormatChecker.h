#ifndef STRINGFORMATCHECKER_H
#define STRINGFORMATCHECKER_H
#include <QString>

class StringFormatChecker
{
  public:
      StringFormatChecker();
      ~StringFormatChecker();

      bool isPositiveNumber(QString& qString);
};

#endif // STRINGFORMATCHECKER_H
