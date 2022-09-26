#include <gtest/gtest.h>
#include <iostream>
#include <BlackBoxDLL/BlackBoxTest.h>


/// <summary>
/// A simple division method that takes two inputs and perform basic division
/// </summary>
/// <param name="numerator">The integer number above</param>
/// <param name="denominator">The integer number below</param>
/// <returns>Result after dividing two integers.</returns>
int Divide(int numerator, int denominator) {
	try {
		if (denominator == 0)
			throw denominator;

		return numerator / denominator;
	}
	catch (int) {
		return -1; // Returns -1 if denominator is equal to zero
	}
}

/// <summary>
/// A simple temperature converter from celsius to Fahrenheit.
/// </summary>
/// <param name="celsius">The temperature in celcius</param>
/// <returns>The result in Fahrenheit</returns>
int ConvertCelsiusToFahrenheit(float celsius) {
	int fahrenheit = 0;
	fahrenheit = round((celsius * 9.0 / 5.0) + 32);

	return fahrenheit;
}

/// <summary>
/// Calculates the area of a triangle.
/// </summary>
/// <param name="base">The base of the triangle</param>
/// <param name="height">The height of the triangle</param>
/// <returns>The area</returns>
float AreaOfATriangle(float base, float height) {
	return (base * height) / 2;
}

/// <summary>
/// Calculates the perimeter of a triangle.
/// </summary>
/// <param name="a">The side</param>
/// <param name="b">The base</param>
/// <param name="c">The other side</param>
/// <returns>Perimeter of the triangle</returns>
float PerimeterOfATriangle(float a, float b, float c) {
	return a + b + c;
}

/// <summary>
/// Calculates the volume of a Cone
/// </summary>
/// <param name="base">The base</param>
/// <param name="height">The height</param>
/// <returns>Volume</returns>
float VolumeOfACone(float base, float height) {
	return (base * height) / 3;
}

/// <summary>
/// Calculates the simple interest
/// </summary>
/// <param name="principal"> The principal amout</param>
/// <param name="time">The period of time</param>
/// <param name="rate">The interest rate</param>
/// <returns></returns>
float Interest(float principal, int time, float rate) {
	return (principal * time * rate) / 100;
}

// Interest Suite
TEST(InterestSuite, SimpleInterest) {
	ASSERT_EQ(700, Interest(2000, 5, 7));
	ASSERT_EQ(6348, Interest(5290.00, 10, 12));
}

// Triangle Suite
TEST(ConeSuite, Volume) {
	ASSERT_EQ(9, VolumeOfACone(9, 3));
	ASSERT_EQ(1102.5, AreaOfATriangle(147, 15));
}

// Triangle Suite
TEST(TriangleSuite, Area) {
	ASSERT_EQ(100, AreaOfATriangle(20, 10));
	ASSERT_EQ(2002.5, AreaOfATriangle(45, 89));
	ASSERT_EQ(17.5, AreaOfATriangle(7, 5));
}

TEST(TriangleSuite, Perimeter) {
	ASSERT_EQ(60, PerimeterOfATriangle(20, 10, 30));
	ASSERT_EQ(139, PerimeterOfATriangle(45, 89, 5));
	ASSERT_EQ(16, PerimeterOfATriangle(7, 5, 4));
}

// Temperature conversion Suite
TEST(TemperatureSuite, ConvertCelsiusToFahrenheit) {
	EXPECT_EQ(-40, ConvertCelsiusToFahrenheit(-40));
	EXPECT_EQ(0, ConvertCelsiusToFahrenheit(-18));
	EXPECT_EQ(32, ConvertCelsiusToFahrenheit(0));
	EXPECT_EQ(50, ConvertCelsiusToFahrenheit(10));
	EXPECT_EQ(70, ConvertCelsiusToFahrenheit(21));
}

// Division Suite
TEST(DivisionSuite, Divide_6_by_2) {
	EXPECT_EQ(3, Divide(6, 2));
	EXPECT_EQ(8, Divide(25, 3));
}

TEST(DivisionSuite, Divide_7_by_0) {
	EXPECT_EQ(-1, Divide(7, 0));
}

// Array suite
TEST(ArraySuite, MinimumNumber) {
	int numbers[5] = { 7, 3, 9, 1, 20 };
	EXPECT_EQ(1, FindMinimumNumber(numbers, 5));

	int negativeNumbers[6] = { -3, -45, -29, -100, -74, -8 };
	EXPECT_EQ(-100, FindMinimumNumber(negativeNumbers, 6));
}

// Circle Suite
TEST(CircleSuite, Area) {
	EXPECT_EQ(314.159, AreaOfACirle(10));
	EXPECT_EQ(6647.61, AreaOfACirle(46));
}

// Square Suite
TEST(SquareSuite, Perimeter) {
	EXPECT_EQ(40, PerimeterOfASquare(10));
	EXPECT_EQ(184, PerimeterOfASquare(46));
}

// Cube Suite
TEST(CubeSuite, Volume) {
	EXPECT_EQ(125, VolumeOfACube(5));
	EXPECT_EQ(27, VolumeOfACube(3));
}

// Statistic Suite
TEST(StatisticSuite, Mean) {
	int numbers[7] = { 2, 4, 6, 8, 10, 12, 14 };
	int oldNumbers[7] = { 1, 3, 5, 7, 9, 11, 13 };
	EXPECT_EQ(56, Mean(numbers, 7));
	EXPECT_EQ(49, Mean(oldNumbers, 7));
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest();
	int result = RUN_ALL_TESTS();

	return result;
}