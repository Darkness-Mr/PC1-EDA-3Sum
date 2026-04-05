cmake_minimum_required(VERSION 3.10)
project(3SumProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ejecutable principal
add_executable(main src/main.cpp src/solution.cpp)

# Ejecutable de pruebas
add_executable(tests tests/tests.cpp src/solution.cpp)

# Incluir directorios para headers
target_include_directories(main PRIVATE src)
target_include_directories(tests PRIVATE src tests)

# Habilitar pruebas con CTest
enable_testing()
add_test(NAME RunTests COMMAND tests)
