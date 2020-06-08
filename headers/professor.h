
#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED

#include <string>

/**This class has no behavior, i don't like it, but felt like needed to
   map database records**/
class Professor {
  private:
    unsigned int id;
    std::string name;
    std::string subject;
    std::string availability;

  public:
    Professor();
    Professor(unsigned int id,std::string name,
              std::string subject, std::string availability);
    unsigned int getId();
    std::string getName();
    std::string getSubject();
    std::string getAvailability();
    void printInfo();
};

#endif // PROFESSOR_H_INCLUDED
