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

#include "todo_lib/TodoModel.h"

class TodoControl {
private:
    unsigned int id;
    static int lastId;

public:    
    void checkTodo();
    void uncheckTodo();
    void listTodo();
    void deleteTodo();
    void peekTodo();

    TodoModel editTodo();
    TodoModel createTodo();
};

#endif

/*
track 'id' attributes
Vector of TodoModels
createTodo() -
editTodo() -
deleteTodo() -
peekTodo() -
listTodo() -
checkTodo() -
uncheckTodo() -
*/