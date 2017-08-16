#include <iostream>
#include <cmath>

void printHello();
int sqrInt(int val);
int fracToDec(int num, int den);
float largestDiff(float a, float b, float c);

void printNumbers(int a, int b)
{
	std::cout << a << "," << b;
}

int sumOfThree(int a, int b, int c)
{
	return a + b + c;
}

int  min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamp(int lower, int upper, int value)
{
	int number = value;

	if (number < lower)
	{
		number = lower;
	}

	else (number > upper) 
	{
		number = upper;
	}

}


float dist(float x1, float y1, float x2, float y2)
{
	return sqrtf(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}
float eta(float x1, float y1, float x2, float y2, float unitsPerSec)
{
	return dist(x1, y1, x2, y2) / unitsPerSec;
}
int main()
{	
	printNumbers(4, 1);
	std::cout << min (5,2) << std::endl;
	std::cout << clamp(15, 30, 22) << std::endl;
	std::cout << dist(0, 0, 0, 1) << std::endl;
	std::cout << eta(4, 4, 4, 8, 4) << std::endl;
	system("pause");


}