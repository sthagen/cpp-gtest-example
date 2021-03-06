#include <gtest/gtest.h>
#include <tribonacci.hpp>

TEST(tribonacci_tests, basic_values) {
    // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, … (sequence A000073 in the OEIS)
    ASSERT_TRUE(tribonacci(0) == 0);
    ASSERT_TRUE(tribonacci(1) == 0);
    ASSERT_TRUE(tribonacci(2) == 1);
    ASSERT_TRUE(tribonacci(3) == 1);
    ASSERT_TRUE(tribonacci(4) == 2);
    ASSERT_TRUE(tribonacci(5) == 4);
    ASSERT_TRUE(tribonacci(6) == 7);
    ASSERT_TRUE(tribonacci(7) == 13);
    ASSERT_TRUE(tribonacci(8) == 24);
    ASSERT_TRUE(tribonacci(9) == 44);
    ASSERT_TRUE(tribonacci(10) == 81);
    ASSERT_TRUE(tribonacci(11) == 149);
    ASSERT_TRUE(tribonacci(12) == 274);
    ASSERT_TRUE(tribonacci(13) == 504);
    ASSERT_TRUE(tribonacci(14) == 927);
}

TEST(tribonacci_iter_tests, basic_values) {
    // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, … (sequence A000073 in the OEIS)
    ASSERT_TRUE(tribonacci_iter(0) == 0);
    ASSERT_TRUE(tribonacci_iter(1) == 0);
    ASSERT_TRUE(tribonacci_iter(2) == 1);
    ASSERT_TRUE(tribonacci_iter(3) == 1);
    ASSERT_TRUE(tribonacci_iter(4) == 2);
    ASSERT_TRUE(tribonacci_iter(5) == 4);
    ASSERT_TRUE(tribonacci_iter(6) == 7);
    ASSERT_TRUE(tribonacci_iter(7) == 13);
    ASSERT_TRUE(tribonacci_iter(8) == 24);
    ASSERT_TRUE(tribonacci_iter(9) == 44);
    ASSERT_TRUE(tribonacci_iter(10) == 81);
    ASSERT_TRUE(tribonacci_iter(11) == 149);
    ASSERT_TRUE(tribonacci_iter(12) == 274);
    ASSERT_TRUE(tribonacci_iter(13) == 504);
    ASSERT_TRUE(tribonacci_iter(14) == 927);
}

TEST(tribonacci_dynamic_tests, basic_values) {
    // 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, 81, 149, 274, 504, 927, 1705, 3136, 5768, 10609, 19513, 35890, 66012, … (sequence A000073 in the OEIS)
    ASSERT_TRUE(tribonacci_dynamic(0) == 0);
    ASSERT_TRUE(tribonacci_dynamic(1) == 0);
    ASSERT_TRUE(tribonacci_dynamic(2) == 1);
    ASSERT_TRUE(tribonacci_dynamic(3) == 1);
    ASSERT_TRUE(tribonacci_dynamic(4) == 2);
    ASSERT_TRUE(tribonacci_dynamic(5) == 4);
    ASSERT_TRUE(tribonacci_dynamic(6) == 7);
    ASSERT_TRUE(tribonacci_dynamic(7) == 13);
    ASSERT_TRUE(tribonacci_dynamic(8) == 24);
    ASSERT_TRUE(tribonacci_dynamic(9) == 44);
    ASSERT_TRUE(tribonacci_dynamic(10) == 81);
    ASSERT_TRUE(tribonacci_dynamic(11) == 149);
    ASSERT_TRUE(tribonacci_dynamic(12) == 274);
    ASSERT_TRUE(tribonacci_dynamic(13) == 504);
    ASSERT_TRUE(tribonacci_dynamic(14) == 927);
}
