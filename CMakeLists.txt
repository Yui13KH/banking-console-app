cmake_minimum_required(VERSION 3.10)
project(BankSystem)

set(CMAKE_CXX_STANDARD 17)

include_directories(
    ${PROJECT_SOURCE_DIR}/Libraries
    ${PROJECT_SOURCE_DIR}/Libraries/Bank
    ${PROJECT_SOURCE_DIR}/Libraries/Core
    ${PROJECT_SOURCE_DIR}/Libraries/Ui
    ${PROJECT_SOURCE_DIR}/Libraries/Ui/auth
    ${PROJECT_SOURCE_DIR}/Libraries/Ui/clients
    ${PROJECT_SOURCE_DIR}/Libraries/Ui/core
    ${PROJECT_SOURCE_DIR}/Libraries/Ui/currencies
    ${PROJECT_SOURCE_DIR}/Libraries/Ui/users
    ${PROJECT_SOURCE_DIR}/Libraries/Users
)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(BankSystem ${SOURCES})
