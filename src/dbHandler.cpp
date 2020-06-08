#include "dbHandler.h"
#define ERROR 1;
using std::string;
using std::to_string;
using std::vector;

void dbHandler::consoleLog(string info) {
  std::cout<< info << std::endl;
}

// Esta funcion se llama POR CADA registro de la base de datos que cumple con una query
static int callback(void* data, int numberOfColumns,
                        char** fields, char** columnNames) {

    vector<string>* records = static_cast<vector<string>*>(data);

    string buffer;
    for (int i = 0; i < numberOfColumns; ++i)
      buffer += string(columnNames[i]) + ":" + string(fields[i]) + " ";

    records->push_back(buffer);
    return 0;
}


dbHandler::dbHandler() {
  //ctor
}

dbHandler::~dbHandler() {
  sqlite3_close(this->db);
  consoleLog(this->name + " database closed");
}


bool dbHandler::connect(string name){
    int error = sqlite3_open(name.c_str(), &this->db);

    if (error) {
      consoleLog("Error connecting to " + name + " database");
      consoleLog(sqlite3_errmsg(this->db));
      return ERROR;
    }
    this->name = name;
    consoleLog("Succesful connection to " + name + " database");
    return 0;
}


bool dbHandler::execute(string query) {
  char* errMsg;
  int status = sqlite3_exec(this->db, query.c_str(), NULL, 0, &errMsg);

    if (status != SQLITE_OK) {
        consoleLog("Error executing query: " + string(errMsg));
        sqlite3_free(errMsg);
        return ERROR;
    }
    consoleLog("Query executed succesfully !");
    return 0;
}

bool dbHandler::execute(string query, vector<string>& records) {

   char* errMsg;
   int status = sqlite3_exec(this->db, query.c_str(), callback,
                             &records, &errMsg);

  if (status != SQLITE_OK) {
    consoleLog("Error executing query: " + string(errMsg));
    sqlite3_free(errMsg);
    return ERROR;
  }
   string log = "Query executed succesfully !: ";
   log+= to_string(records.size()) + " records retrieved";
   consoleLog(log);
   return 0;
}
