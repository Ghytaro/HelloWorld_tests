#include <gtest>
#include "hello.h"

TEST(HelloWorldTest, Basic) {
    EXPECT_EQ(sayHello(), "Hello, World!");
}