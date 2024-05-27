#include "todo_lib/TodoModel.h"
#include <string>
#include <iostream>

unsigned int TodoModel::nextId = 1;

TodoModel::TodoModel() {

};

TodoModel::TodoModel() : id(nextId++){
    this->title = "Task #" + std::to_string(id);
    this->description = "Description ...";
    this->status = false;
}
TodoModel::TodoModel(std::string title) : id(nextId++) {
    this->title = title;
    this->description = "Description ...";
    this->status = false;
}
TodoModel::TodoModel(std::string title, std::string description) : id(nextId++) {
    this->title = title;
    this->description = description;
}
TodoModel::TodoModel(std::string title, std::string description, bool status) : id(nextId++) {
    this->title = title;
    this->description = description;
    this->status = status;
}

void TodoModel::check() {
    status = true;
}
void TodoModel::uncheck() {
    status = false;
}

bool TodoModel::getStatus() {
    return status;
}
std::string TodoModel::getTitle() {
    return title;
}
std::string TodoModel::getDescription() {
    return description;
}

void TodoModel::setStatus(bool status) {
    this->status = status;
}
void TodoModel::setTitle(std::string title) {
    this->title = title;
}
void TodoModel::setDescription(std::string description) {
    this->description = description;
}

TodoModel::~TodoModel() = default;