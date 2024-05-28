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

#ifndef TODOCONTROLLER_H
#define TODOCONTROLLER_H

#include <vector>

#include "todo_lib/TodoModel.h"

class TodoController {
private:
    unsigned int lastId;
    std::vector<TodoModel> todos;

    TodoController() {
        lastId = 0;
        todos = std::vector<TodoModel>{};
    }

public:
    static TodoController* instance;

    void checkTodo(int id);
    void uncheckTodo(int id);
    void deleteTodo(int id);
    void peekTodo(int id, TodoModel *pTodoModel);
    std::vector<TodoModel> listTodo();

    int editTodo(int id, std::string title = NULL, std::string description = NULL, bool status = NULL);
    int createTodo(std::string title);
    int createTodo(std::string title, std::string description);
    int createTodo(std::string title, bool status);
    int createTodo(std::string title, std::string description, bool status);
};

#endif