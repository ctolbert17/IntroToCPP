#include <iostream>
bool isUnique(int num[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			if (i != j && num[i] == num[j])
			{
				return true;
			}
		}
	}
}
int sumNumbers(int num[], int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total = total + num[i];
	}
}
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
void printNumbers(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}
void reverse(int num[], int size)
{
	
	for (int i = 0; i < size / 2; ++i);
	{
		int temp = num[i];

		//set front to back and 
		num[i = size - 1];
			//set the nback to front
		num[size - i - i] temp;
	}
}
void sortAscend(int num[], int size)
{	for(int i = 0; i < size -1; ++i)
	for (int i = 0; i < size - 1; ++i)
	{
		{
			if (num[i] > num[i + 1])
				num[i] = num[i + 1];
			num[i + 1] = temp;
		}
	}
}
void sortDescend(int num[], int size)
{
	sortDescend(num, size);
	reverse(num, size);
}
int main()
{
	//Declare and define integer arrays
	int numbers[5];

	//type each data piece
	numbers[0] = 0;
	numbers[1] = 0;
	numbers[2] = 0;
	numbers[3] = 0;
	//Initialize each element with a for loop
	for (int i = 0; i < 5; ++i)
	{
		numbers[i] = 0;
	}
	//intitialize using initializer list
	int numbersList[]{ 0, 0, 0, 0, 0 };
	//Accessing arrays using indicies
	numbers[0] = 5;		// assign to an array at a given index
	std::cout << numbers[0] << std::endl;
	//Iterating over an array
	for (int i = 0; i < 5; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}

	//assign one to every other element
	for (int i = 0; i < 5; i += 2)
	{
		numbers[i] = 1;
	}

	//Passing arrays into a function
	std::cout << "Test" << std::endl;
	printNumbers(numbers, 5);
	system("pause");

	int values[]{ 1,2,3,4,5 };
	int size = 5;
	for (int i = 0; i < size; i++)
	{
		std::cout << values[i] << std::endl;
	}
	//Sum of Array
	std::cout << "Sum" <<

		//Smallest Value

		int smallestValue(int num[], int size)
	{
		int smallest = INT_MAX;

		for (int i = 0; i < size; ++i)
		{
			if (num[i] < smallest;)
		}
	}
	//Largest
	largest Value(int num[], int size)
	{
		int largest = INT_MIN;

		for (int i = 0; i < size; ++i)
		{
			if (num[i] > largest)
			{
				largest = num[i];
			}
		}
	}



	//Open
	//Find a Value
	int nums[]{ 4,5,7,8,9 };
	//int size = 5;
	//int value = 0;
	std::cout << findIndex(nums, 5, 8) << std::endl;

	//Array Uniqueness
	//see function above
	//Reverse

	system("pause");
}