#include <iostream>
int findIndex(int numbers[], int size, int value)
{
	int index;
	index = -1;
	for (int i = 0; i < size; i++) 
	{
	
		if (value == numbers[i])
		{
			index = i;
		}
	}
	return index;
}
//void printNumbers(int nums[], int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << nums[i] << std::endl;
//	}
//}
int main()
{
//	//Declare and define integer arrays
//	int numbers[5];
//
//	//type each data piece
//	numbers[0] = 0;
//	numbers[1] = 0;
//	numbers[2] = 0;
//	numbers[3] = 0;
//	//Initialize each element with a for loop
//	for (int i = 0; i < 5; ++i)
//	{
//		numbers[i] = 0;
//	}
//	//intitialize using initializer list
//	int numbersList[]{ 0, 0, 0, 0, 0 };
//	//Accessing arrays using indicies
//	numbers[0] = 5;		// assign to an array at a given index
//	std::cout << numbers[0] << std::endl;
//	//Iterating over an array
//	for (int i = 0; i < 5; ++i)
//	{
//		std::cout << numbers[i] << std::endl;
//	}
//
//	//assign one to every other element
//	for (int i = 0; i < 5; i += 2)
//	{
//		numbers[i] = 1;
//	}
//
//	//Passing arrays into a function
//	std::cout << "Test" << std::endl;
//	printNumbers(numbers, 5);
//	system("pause");

	/*int values[]{ 1,2,3,4,5 };
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		std::cout << values[i] << std::endl;
	}
	*/





	//Open
	//Find a Value
	int nums[]{ 4,5,7,8,9 };
	//int size = 5;
	//int value = 0;
	std::cout << findIndex(nums, 5, 8) << std::endl;
	system("pause");
}