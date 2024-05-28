add_library(todo_lib TodoModel.cpp TodoController.cpp)

target_include_directories(todo_lib PUBLIC ../include)