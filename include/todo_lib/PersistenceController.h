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

#ifndef TODO_PERSISTENCECONTROLLER_H
#define TODO_PERSISTENCECONTROLLER_H

#include <iostream>
#include <vector>
#include <nlohmann/json.hpp>

#include "todo_lib/TodoModel.h"

using json = nlohmann::json;

class PersistenceController {
public:
    static void persist(int lastId, std::vector<TodoModel> todoModels);
    static void retrieve(int& lastId, std::vector<TodoModel>& todoModels);
};

#endif //TODO_PERSISTENCECONTROLLER_H
