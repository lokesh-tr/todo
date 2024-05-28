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

#ifndef TODOCONTROL_H
#define TODOCONTROL_H

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

    void checkTodo(int);
    void uncheckTodo(int);
    void deleteTodo(int);
    TodoModel peekTodo(int);
    std::vector<TodoModel> listTodo();

    int editTodo(int);
    int createTodo();
};

#endif