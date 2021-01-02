#include <gtest/gtest.h>
#include <fibonacci.h>

TEST(FibonacciTests, BasicChecks) {
    ASSERT_TRUE(fibonacci(0) == 0);
    ASSERT_TRUE(fibonacci(1) == 1);
    ASSERT_TRUE(fibonacci(2) == 1);
    ASSERT_TRUE(fibonacci(3) == 2);
    ASSERT_TRUE(fibonacci(4) == 3);
    ASSERT_TRUE(fibonacci(5) == 5);
    ASSERT_TRUE(fibonacci(6) == 8);
    ASSERT_TRUE(fibonacci(7) == 13);
    ASSERT_TRUE(fibonacci(8) == 21);
    ASSERT_TRUE(fibonacci(9) == 34);
    ASSERT_TRUE(fibonacci(10) == 55);
    ASSERT_TRUE(fibonacci(11) == 89);
    ASSERT_TRUE(fibonacci(12) == 144);
    ASSERT_TRUE(fibonacci(13) == 233);
}
