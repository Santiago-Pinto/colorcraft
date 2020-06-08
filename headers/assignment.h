#ifndef ASSIGNMENT_H_INCLUDED
#define ASSIGNMENT_H_INCLUDED

#include <string>

/**This class has no behavior, i don't like it, but felt like needed to
   map database records**/
class Assignment {
  private:
    int profId;
    std::string group;

  public:
    Assignment(unsigned int profId, std::string group);
    unsigned int getProfId();
    std::string getGroup();
    void printInfo();
};
#endif // ASSIGNMENT_H_INCLUDED
