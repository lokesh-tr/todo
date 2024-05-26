#include "include\todo_lib\TodoModel.h"

//Constructors
TodoModel::TodoModel() {
    // empty constructor
}
TodoModel::TodoModel(int id, std::string title) {
    this->id = id;
    this->title = title;
}
TodoModel::TodoModel(int id, std::string title, std::string description) {
    this->id = id;
    this->title = title;
    this->description = description;
}

//Additional Functions
void TodoModel::check() {
    status = true;
}
void TodoModel::uncheck() {
    status = false;
}

// Getters
bool TodoModel::getStatus() {
    return status;
}
std::string TodoModel::getTitle() {
    return title;
}
std::string TodoModel::getDescription() {
    return description;
}

// Setters
void TodoModel::setStatus(bool state) {
    // needs exception handling
    if (state == true || state == false) {
        status = state;
    }
}
void TodoModel::setTitle(std::string title) {
    this->title = title;
}
void TodoModel::setDescription(std::string description) {
    this->description = description;
}