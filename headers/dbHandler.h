#ifndef DBHANDLER_H_INCLUDED
#define DBHANDLER_H_INCLUDED

#include <sqlite3.h>
#include <iostream>
#include <vector>

class dbHandler {
  private:
    sqlite3* db;
    void consoleLog(std::string);
    std::string name;

  public:
    dbHandler();
    ~dbHandler();
    bool connect(std::string name);
    bool execute(std::string query);

    //Not only executes the query, but also saves the records on the
    //second parameter
    bool execute(std::string query, std::vector<std::string>& records);
};
#endif // DBHANDLER_H_INCLUDED
