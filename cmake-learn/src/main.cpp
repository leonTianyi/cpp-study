#include <stdio.h>
#include <iostream>
#include <hello.hpp> 
#include <blah.hpp>
//< > searches within the system path, not local path. Need to specify in CMakeLists where the header files can be found.
// TOP MOST CMakeLists.txt
//#include "./hello.hpp" searches for the local path (i.e inside th same directory as main.cpp) 

int main() {
    PrintHello();
    PrintBlah();
    Sum(1,2);
    return 0;
}