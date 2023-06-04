#include <gtest/gtest.h>
#include <blah.hpp>

TEST(TestBlah, SumTest1) {
    EXPECT_EQ(3,Sum(1,2));
}

TEST(TestBlah, SumTest2) {
    EXPECT_EQ(10,Sum(1,2));
}