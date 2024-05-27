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

#include <fstream>
#include "todo_lib/PersistenceController.h"


void PersistenceController::persist(int lastId, std::vector<TodoModel> todoModels) {

    std::ofstream dataFileToWrite("data.json");

    json j = json{
            {"lastId",     lastId},
            {"todoModels", todoModels}
    };

    dataFileToWrite << j;
    dataFileToWrite.close();
}

void PersistenceController::retrieve(int &lastId, std::vector<TodoModel> &todoModels) {
    std::ifstream dataFile("data.json");

    auto j = json::parse(dataFile);

    j.at("lastId").get_to(lastId);
    j.at("todoModels").get_to(todoModels);

    dataFile.close();
}


