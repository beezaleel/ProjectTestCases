#include <gtest/gtest.h>
#include <iostream>

#include <BlackBoxDLL/BlackBoxTest.h>

int add(int x) {
	return x * 5;
}

TEST(AdditionSuite, Add5) {
	ASSERT_EQ(25, add(5));
}

TEST(FibonacciTests, Fib5) {
	EXPECT_EQ(5, Fibonacci(5));
}

TEST(FibonacciTests, Fib8) {
	EXPECT_EQ(21, Fibonacci(8));
}

TEST(FibonacciTests, FibNegativeOne) {
	EXPECT_EQ(-1, Fibonacci(-1));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest();
	int result = RUN_ALL_TESTS();

	return result;
}