#include "BlackBoxTest.h"
#include "pch.h"


int Fibonacci(int v) {
	if (v <= 0)
		return -1;

	if (v == 1 || v == 2)
		return 1;

	return Fibonacci(v - 1) + Fibonacci(v - 2);
}