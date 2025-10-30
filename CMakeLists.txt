cmake_minimum_required(VERSION 4.0.0)
project(limbo-key LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

file(GLOB_RECURSE PROJECT_SRC src/*.cpp)

add_executable(${PROJECT_NAME}
	${PROJECT_SRC}
)