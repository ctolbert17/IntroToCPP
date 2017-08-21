#include <iostream>
#include <cstdlib>

void gridGen(int width, int height)

void guessTheNumber(int lower, int upper, int tryCount
{	
	int secret = rand() % (upper-lower) + lower;
	for (int i = 0;, i < tryCount; ++i)
}
	/*for (int i = 0; i < width; ++i)
	{
		for (int j = 0; j < width; ++j);
		{
			std::cout << "X";
		}
		std::cout << "n";
	}*/
	/*for (int i = 1; i <= height * width; ++i)
	{
		std::cout << "X";

		if (i % width == 0)
		{
			std::cout << "\n";
		}
	}
}*/
void fizzBuzz(int start, int end)
{
	for (int i = start; i <= end; ++i)
	{
		if (i % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz";
		}
	}
}
void PrintXY(int x, int y)
{
	for (int i = x; x <= y; ++i)
	{
		std::cout << i << std::endl;
	}
}

int promptLargest(int qtyRequested)
{
	int largest = INT_MIN;
		
	for (int i = 0; i < qtyRequested; ++i)
	{
		std::cout << "Num Please!" << std::endl;

		int input = 0;

		std::cin >> input;
		if (input > largest)
		{
			largest = input;
		}
	}
}
void EvenOrOdd(int start,int end)
{
	for (int i = start; i <=
}
int main()

{
{	while
	int iter = 0;
	while (iter < 11)
	{
		std::cout << iter << std::endl;
		iter++;
	}

	for:
	 - initialization; 
	 - condition;
	 - expression;
	for (int i = 0; i < 11; ++i)
	{
		std::cout << i << std::endl;
	}
	Do-while
	int j = 0;
	do
	{
		std::cout << j << std::endl;
		++j;
	} 
	while (j < 11);

	Input validation
	int userInput = -1;
		do 
		{
			std::cout << "Give me a number between 1 and 5" << std::endl;
			std::cin >> userInput;
		} 
		while (userInput < 1 || userInput > 5);
		std::cout << "Yay!\n";

	system("pause");
}
	 1-100
	for (int i = 0; i < 100; ++i)
	{
		std::cout << i << std::endl;
	}
	100-1
	int num = 100;
	do
	{
		std::cout << num << std::endl;
	} 
	while (--num);

	1995-2017
	int input = 1995;
	do
	{
		std::cout << input << std::endl;
	} 
	while (++input <= 2017);
	3 Fave Positive Numbers
	int ui1 = 0;
	int ui2 = 0;
	int ui3 = 0;
	do
	{
		std::cout << "Hi! Enter 3 of your favorite postive numbers one at a time." << std::endl;
		std::cin >> ui1;
		std::cout << "Ok, your first number was " << ui1 << std::endl;
		std::cout << "What is your second number?" << std::endl;
		std::cin >> ui2;
		std::cout << "Ok, your numbers so far have been " << ui1 << " and " << ui2 << std::endl;
		std::cout << "Ok, what is your third number?" << std::endl;
		std::cin >> ui3;
		std::cout << "Your favorite numbers are " << ui1 << ", " << ui2 << " and " << ui3 << "!" << std::endl;
	} 
	while (ui1 >= 0 && ui2 >= 0 && ui3 >= 0);*/
	gridGen(3, 5);*/
	

	system("pause");
}