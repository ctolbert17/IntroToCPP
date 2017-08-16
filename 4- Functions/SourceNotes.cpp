#include <iostream>

int spop(int lhs, int rhs);

void greet();

// y = x*x
int pow2(int a);

float frac(int num, int den); // floating point number, a number that can have a decimal

							  //a, b, c
float largestDifference(float a, float b, float c);

// input, what we are starting with
// change, how do we need to work with this data
// output, what do we want

// Problem 2:
// Step 1: Name the function
// print2
// Step 2: Determine the desired return (output)
// void
// Step 3: Determine our parameters (input)
// (int a, int b)

void print2(int a, int b)
{
	std::cout << a << ", " << b << std::endl;
}

int sum3(int c, int d, int e)
{
	int retval; // return value

	retval = c + d + e;
	// work happens here

	//return c + d + e;

	return retval;
}
void printGreeting() {
	std::cout << "Hello Functions";

}
int Sqint(int a) {
	int y = pow(a, 2);
	std::cout << y << std::endl;
	return y;
}
float frc(int Num, int Dem)
{
	float x = Num / Dem;
	return x;
}
//int main()
//{
//	std::cout << frc << std::endl;
//
//	system("pause");
//}