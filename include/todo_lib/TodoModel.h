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

class TodoModel {
private:
    unsigned int id;
    bool status;
    std::string title;
    std::string description;
public:
    TodoModel();
    TodoModel(int id);
    TodoModel(std::string title);
    TodoModel(std::string title, std::string description);
    TodoModel(std::string title, std::string description, bool status);

    void check();    
    void uncheck();


    bool getStatus();
    int getId();
    std::string getTitle();
    std::string getDescription();

    void setStatus(bool status);
    void setTitle(std::string title);
    void setDescription(std::string description);
};

#endif