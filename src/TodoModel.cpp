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

TodoModel::TodoModel(int id, std::string title) {
    this->id = id;
    this->title = title;
    this->description = "";
    this->status = false;
}
TodoModel::TodoModel(int id, std::string title, std::string description){
    this->id = id;
    this->title = title;
    this->description = description;
    this->status = false;
}
TodoModel::TodoModel(int id, std::string title, bool status) {
    this->id = id;
    this->title = title;
    this->description = "";
    this->status = status;
}
TodoModel::TodoModel(int id, std::string title, std::string description, bool status){
    this->id = id;
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
int TodoModel::getId() {
    return id;
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