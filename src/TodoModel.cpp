// ===-----------------------------------------------------------------------------------------===
//
//  This source file is part of the Todo Command-Line Application open source project
//
//  Copyright (c) 2024 Lokesh.T.R, Aadith Jagan Pamarthi and the contributors
//  Licensed under Apache License v2.0
//
//  See https://www.apache.org/licenses/LICENSE-2.0.txt for license information
//  See https://github.com/lokesh-tr/todo/blob/main/CONTRIBUTORS.txt for the list of contributors
//
// ===-----------------------------------------------------------------------------------------===

#include <string>
#include <iostream>

#include "todo_lib/TodoModel.h"

TodoModel::TodoModel() {
    this->title = "Task Name";
    this->description = "Description ...";
    this->status = false;
}
TodoModel::TodoModel(std::string title){
    this->title = title;
    this->description = "Description ...";
    this->status = false;
}
TodoModel::TodoModel(std::string title, std::string description){
    this->title = title;
    this->description = description;
}
TodoModel::TodoModel(std::string title, std::string description, bool status){
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