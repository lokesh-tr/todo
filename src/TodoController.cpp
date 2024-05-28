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

#include <iostream>
#include <vector>
#include <algorithm>

#include <todo_lib\TodoController.h>
#include <todo_lib\TodoModel.h>

TodoController* TodoController::instance = new TodoController();

void TodoController::checkTodo(int id) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            todo.check();
            break;
        }
    }
}

void TodoController::uncheckTodo(int id) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            todo.uncheck();
            break;
        }
    }
}

std::vector<TodoModel> TodoController::listTodo() {
    return todos;
}

void TodoController::deleteTodo(int id) {
    todos.erase(std::remove_if(todos.begin(), todos.end(), [id](TodoModel& todo) {
        return todo.getId() == id;
    }), todos.end());
}

void TodoController::peekTodo(int id, TodoModel *pTodoModel) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            *pTodoModel = todo;
            return;
        }
    }
    pTodoModel = NULL;
}

int TodoController::editTodo(int id, std::string title, std::string description, bool status) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            if (title != std::string(NULL)) {
                todo.setTitle(title);
            }
            if (description != std::string(NULL)) {
                todo.setDescription(description);
            }
            if (status != bool(NULL)) {
                todo.setStatus(status);
            }
            return id;
        }
    }
    return NULL;
}

int TodoController::createTodo(std::string title) {
    TodoModel todo = TodoModel(++lastId, title);
    todos.push_back(todo);
    return lastId;
}
int TodoController::createTodo(std::string title, std::string description) {
    TodoModel todo = TodoModel(++lastId, title, description);
    todos.push_back(todo);
    return lastId;
}
int TodoController::createTodo(std::string title, bool status) {
    TodoModel todo = TodoModel(++lastId, title, status);
    todos.push_back(todo);
    return lastId;
}
int TodoController::createTodo(std::string title, std::string description, bool status) {
    TodoModel todo = TodoModel(++lastId, title, description, status);
    todos.push_back(todo);
    return lastId;
}