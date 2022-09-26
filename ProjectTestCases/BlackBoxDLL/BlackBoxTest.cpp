#include "BlackBoxTest.h"
#include "pch.h"
#include <iostream>
#include <cmath>

// The constant value of PI
#define PI 3.14159265358979323846

/// <summary>
/// Calculates the mean value of any given numbes
/// </summary>
/// <param name="ptr">The pointer to the first element</param>
/// <param name="size">The size of the array</param>
/// <returns>The mean value</returns>
float Mean(int* ptr, int size) {
	float mean = 0;
	for (int i = 0; i < size; ++i) {
		mean = mean + ptr[i];
	}

	return mean;
}

/// <summary>
/// Calculates the area of a cude
/// </summary>
/// <param name="side">The equal side of the cube</param>
/// <returns>The area</returns>
int VolumeOfACube(int side) {
	return pow(side, 3);
}

/// <summary>
/// Calculates the perimeter of a square
/// </summary>
/// <param name="length">The length of square</param>
/// <returns>Area of the square</returns>
int PerimeterOfASquare(int length) {
	return length * 4;
}

/// <summary>
/// Calculates the area of a sircle
/// </summary>
/// <param name="radius"> The radius</param>
/// <returns></returns>
double AreaOfACirle(double radius) {
	double area = 0;
	area = PI * pow(radius, 2);
	return round(area * 1000.0) / 1000.0 ;
}

/// <summary>
/// Finds the lowest number in a given array
/// </summary>
/// <param name="ptr">The pointer</param>
/// <param name="size">The size of the array</param>
/// <returns></returns>
int FindMinimumNumber(int* ptr, int size) {
	int minimum = 5;
	for (int i = 0; i < size; i++) {
		if (ptr[i] < minimum) {
			minimum = ptr[i];
		}	
	}

	return minimum;
}
