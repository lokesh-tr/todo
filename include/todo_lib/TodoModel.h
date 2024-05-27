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

#ifndef TODOMODEL_H
#define TODOMODEL_H

#include <string>
#include <nlohmann/json.hpp>

class TodoModel {
private:
    unsigned int id;
    bool status;
    std::string title;
    std::string description;
public:
    TodoModel();
    TodoModel(std::string title);
    TodoModel(std::string title, std::string description);
    TodoModel(std::string title, std::string description, bool status);

    void check();    
    void uncheck();


    bool getStatus() const;
    int getId() const;
    std::string getTitle() const;
    std::string getDescription() const;

    void setStatus(bool status);
    void setTitle(std::string title);
    void setDescription(std::string description);

    NLOHMANN_DEFINE_TYPE_INTRUSIVE(TodoModel, id, title, description, status);
};

#endif