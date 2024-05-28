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

TodoController* TodoController::instance = &TodoController();

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

TodoModel TodoController::peekTodo(int id) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            return todo;
        }
    }
    throw std::invalid_argument("Todo not found");
}

int TodoController::editTodo(int id) {
    for (auto &todo : todos) {
        if (todo.getId() == id) {
            std::string filler;
            std::cout << "Title: ";
            std::cin.ignore();
            std::getline(std::cin, filler);
            todo.setTitle(filler);

            std::cout << "Description: ";
            std::cin.ignore();
            std::getline(std::cin, filler);
            todo.setDescription(filler);
            return id;
        }
    }
    throw std::invalid_argument("Todo not found");
}

int TodoController::createTodo() {
    TodoModel todo = TodoModel(++lastId);
    todos.push_back(todo);
    return lastId;
}