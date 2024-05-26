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
#include <cstring>
#include <string>

void help();
void list(bool describe, bool includeCompleted);
void check(int id);
void uncheck(int id);
void edit(int id, std::string title, std::string description, bool status);
void peek(int id);
void deleteTodo(int id);
void add(std::string title, std::string description, bool status);

struct Todo {
    Todo(const std::string title, std::string description, bool status) {
        this->title = title;
        this->description = description;
        this->status = status;
    }

    int id;
    bool status;
    std::string title;
    std::string description;
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        // todo: command mode
    }

    std::string command = argv[1];

    if(command == "--help" || command == "-h") {
        help();
    } else if(command == "list") {
        list(false, false);
    } else if(command == "check") {
        check(0);
    } else if(command == "uncheck") {
        uncheck(0);
    } else if(command == "edit") {
        edit(0, "", "", false);
    } else if(command == "peek") {
        peek(0);
    } else if(command == "delete") {
        deleteTodo(0);
    } else {
        std::string title = argv[1];
        std::string description;
        bool status = false;

        for(int i = 2; i < argc; i++) {
            if((strcmp(argv[i], "--status") == 0 || strcmp(argv[i], "-s") == 0) && (i+1 < argc)) {
                status = argv[i+1];
            }

            if((strcmp(argv[i], "--description") == 0 || strcmp(argv[i], "-d") == 0) && (i+1 < argc)) {
                description = argv[i+1];
            }
        }

        add(title, description, status);
    }

    return 0;
}

void help() {
    // todo: implement function body
}

void list(bool describe, bool includeCompleted) {
    // todo: implement function body
}

void check(int id) {
    // todo: implement function body
}

void uncheck(int id) {
    // todo: implement function body
}

void edit(int id, std::string title, std::string description, bool status) {
    // todo: implement function body
}

void peek(int id) {
    // todo: implement function body
}

void deleteTodo(int id) {
    // todo: implement function body
}

void add(std::string title, std::string description, bool status) {
    Todo todo(title, description, status);

    std::cout << todo.title << todo.description << todo.status << std::endl;
}

