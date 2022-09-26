#pragma once

#ifdef BLACKBOXDLL_EXPORTS
#define BLACKBOXTEST_API __declspec(dllexport)
#else
#define BLACKBOXTEST_API __declspec(dllimport)
#endif


// Use extern "C" so C++ compiler does not mess with
// the headers we defined
extern "C"
{
	BLACKBOXTEST_API int FindMinimumNumber(int *ptr, int size);
	BLACKBOXTEST_API double AreaOfACirle(double radius);
	BLACKBOXTEST_API int PerimeterOfASquare(int length);
	BLACKBOXTEST_API int VolumeOfACube(int side);
	BLACKBOXTEST_API float Mean(int *ptr, int size);
}
