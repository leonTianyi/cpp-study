add_library(hello hello.cpp)
add_library(blah blah.cpp)

add_executable(binary_main main.cpp) ##what will be executed

 #bin_main doeesn't know about the existance of hello, need to link
target_link_libraries(binary_main
                        hello
                        blah)
