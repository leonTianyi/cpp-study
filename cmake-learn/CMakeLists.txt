project(cmake_test_project)
cmake_minimum_required(VERSION 3.0)


# Header files location, all headers should be searched for in the specified path 
# Note: This needs to come BEFORE add_subdir
include_directories(${PROJECT_SOURCE_DIR}/src)

#src has CMakeLists.txt
add_subdirectory(${PROJECT_SOURCE_DIR}/src)

enable_testing() #must be done in the top most cmakelists

add_subdirectory(${PROJECT_SOURCE_DIR}/tests)