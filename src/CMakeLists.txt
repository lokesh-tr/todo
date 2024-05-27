add_library(todo_lib TodoModel.cpp
        PersistenceController.cpp)

include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

target_link_libraries(todo_lib PUBLIC nlohmann_json::nlohmann_json)

target_include_directories(todo_lib PUBLIC ../include)

