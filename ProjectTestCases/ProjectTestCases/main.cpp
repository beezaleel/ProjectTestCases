#include <gtest/gtest.h>
#include <iostream>

int add(int x) {
	return x * 5;
}

TEST(AdditionSuite, Add5) {
	ASSERT_EQ(25, add(5));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest();
	int result = RUN_ALL_TESTS();

	return result;
}