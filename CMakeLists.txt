cmake_minimum_required(VERSION 4.0.0)
project(limbo-key LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)

set(VCPKG_CRT_LINKAGE "static")

include(vcpkg/scripts/buildsystems/vcpkg.cmake)

file(GLOB_RECURSE PROJECT_SRC src/*.cpp)

find_package(glfw3 CONFIG REQUIRED)
find_package(GLEW REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(OpenAL CONFIG REQUIRED)
find_path(PNGPP_INCLUDE_DIRS "png++/color.hpp")

add_executable(${PROJECT_NAME}
	${PROJECT_SRC}
)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw GLEW::GLEW imgui::imgui OpenAL::OpenAL)
target_include_directories(${PROJECT_NAME} PRIVATE ${PNGPP_INCLUDE_DIRS})