#include <iostream>
int main()		// Bools
{
	bool isHappy = true;

	if (isHappy)
	{
		std::cout << "I am very happy!";
	}
	else {
		std::cout << "I am very sad!" << std::endl;
	}			//....
	
	// If, Else

	int happiness = 80;

	if (happiness > 75)
	{
		std::cout << "You are ecstatic!" << std::endl;
	}
	else if (happiness < 30)
	{
		std::cout << "You are rather sad! Here have a hug! :)" << std::endl;
	}
	
	


	// Closed Session

	// A)
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	system("pause");

	// B)
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;
	system("pause");

	// C)
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;
	
	
	// D)
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;
	

	// E)
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;
	
	 // F)
       int numberF = 6;
       if (numberF == 0)
       {
               numberF = 0;
       }
       else if (numberF > 10)
       {
               numberF = 1;
       }

       std::cout << "F) " << numberF << std::endl;
	  
	
	   // G)
	   int numberG = 6;
	   if (numberG < 0)
	   {
		   numberG = 0;
	   }
	   else if (numberG < 2)
	   {
		   numberG = 1;
	   }
	   else if (numberG < 5)
	   {
		   numberG = 2;
	   }
	   else
	   {
		   numberG = 3;
	   }
	   std::cout << "G) " << numberG << std::endl;

	   // ...
	// Number Judging
	   int userInput;
	   std::cout << "Enter a number between 1-100!" << std::endl;
	   std::cin >> userInput;
	   
	   if (userInput == 50)
	   {
		   std::cout << userInput << " is neither too big or too small of a number! ";
	   }
	   else if (userInput < 50)
	   {
		   std::cout << userInput << " is a small number! ";
	   }
	   else if (userInput > 50)
	   {
		   std::cout << userInput << " is a HUGE number! ";
	   }
	   

	// Age Gate:
	 
	   int years = 0;
	   std::cout << "Enter how old you are!" << std::endl;
	   std::cin >> years;
	   
	   if (years < 18)
	   {
		   std::cout << "You are a minor!";
	   }
	   else if (years >= 18)
	   {
		   std::cout << "Congratualtions! You are an adult! ";
	   }
	   else if (years >= 50)
	   {
		   std::cout << "Congratulations! You are eligible for AARP insurance! ";
	   }
	   else if (years >= 65)
	   {
		   std::cout << "Congratulations! You can leave the workforce and collect retirement benefits! ";
	   }
		  
	   

	// Open Activities: Even or Odd
	   int input;
	   std::cout << "Enter a number!" << std::endl;
	   
	   std::cin >> input;
	   input %= 2;
	   if (input == 0)
	   {
		   std::cout << "Your number is even!";
	   }
	   else if (input != 0)
	   {
		   std::cout << "Your number is odd!" <<std::endl;
	   }
	   

	// Clamp the Number

	   int clamped;

	   std::cout << "Enter a number between 15 and 30!" << std::endl;
		   std::cin >> clamped;
		   if (clamped < 15)
		   {
			 std::cout << "Your number is too low! Enter a number between 15 and 30" << std::endl;
			 std::cin >> clamped;
		   }
		   else if (clamped > 30)
		   {
			   std::cout << "Your number is too high! Enter a number between 15 and 30" << std::endl;
			   std::cin >> clamped;
		   }
		   std::cout << clamped << std::endl;
		  
		   system("pause");

// Cookie Orders


		int cookies = 0;
		std::cout << "Enter how many orders of cookies would you like" << std::endl;
		std::cin >> cookies;

		if (cookies < 23)
		{
			std:: cout
		}

		system("pause");


	

		
}	