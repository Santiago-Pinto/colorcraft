#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED
#include <string>

/**This class has no behavior, i don't like it, but felt like needed to
   map database records**/
class Subject {
  private:
    unsigned int id;
    std::string name;
    unsigned int weeklyWorkload;

  public:
    Subject(unsigned int id,std::string name, unsigned int weeklyWorkload);
    unsigned int getId();
    std::string getName();
    unsigned int getLoad();
    void printInfo();
};
#endif // SUBJECT_H_INCLUDED
