#include <gtest/gtest.h>
#include <tribonacci.hpp>

TEST(FibonacciTests, BasicChecks) {
    // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, … (sequence A000073 in the OEIS)
    ASSERT_TRUE(tribonacci(0) == 0);
    ASSERT_TRUE(tribonacci(1) == 1);
    ASSERT_TRUE(tribonacci(2) == 1);
    ASSERT_TRUE(tribonacci(3) == 2);
    ASSERT_TRUE(tribonacci(4) == 4);
    ASSERT_TRUE(tribonacci(5) == 7);
    ASSERT_TRUE(tribonacci(6) == 13);
    ASSERT_TRUE(tribonacci(7) == 24);
    ASSERT_TRUE(tribonacci(8) == 44);
    ASSERT_TRUE(tribonacci(9) == 81);
    ASSERT_TRUE(tribonacci(10) == 149);
    ASSERT_TRUE(tribonacci(11) == 274);
    ASSERT_TRUE(tribonacci(12) == 504);
    ASSERT_TRUE(tribonacci(13) == 927);
}
