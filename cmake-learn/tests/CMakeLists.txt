add_subdirectory(/usr/src/gtest
                 ${PROJECT_BINARY_DIR}/gtest)

include(CTest)

set(TEST_BINARY ${PROJECT_NAME}_test)  #make a var, optional

add_executable(test_blah test_blah.cpp)

target_link_libraries(test_blah
                        blah
                        gtest gtest_main
)

add_test(
    NAME test_blah
    COMMAND tests/test_blah
)