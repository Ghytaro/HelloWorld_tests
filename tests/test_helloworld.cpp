#include <gtest.h>
#include "hello.h"

TEST(HelloWorldTest, ReturnsCorrectString) {
    EXPECT_EQ(sayHello(), "Hello, World!");
}

TEST(HelloWorldTest, NotEqualWrongString) {
    EXPECT_NE(sayHello(), "Hi!");
}