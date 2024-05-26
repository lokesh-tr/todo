#ifndef TODOMODEL_H
#define TODOMODEL_H

#include <string>

class TodoModel {
public:
    // attributes
    unsigned int id;
    bool status = 1;
    std::string title;
    std::string description = "Add description... with <code for description>";

    //constructors
    TodoModel();
    TodoModel(int id, std::string title);
    TodoModel(int id, std::string title, std::string description);

    // additional functions
    void check();    
    void uncheck();

    //getters
    bool getStatus();
    std::string getTitle();
    std::string getDescription();

    //setters
    void setStatus(bool state);
    void setTitle(std::string title);
    void setDescription(std::string description);
};

#endif