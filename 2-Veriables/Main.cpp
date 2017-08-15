#include <iostream>
int main()
{
	int age = 18;
	std::cout << age << std::endl;
	age = 21;
	age = age + 1; 
	std::cout << age << std::endl;
	int first = 5.9;
	int second = 17.4;
	int sum = first + second;
	std::cout << first << " plus " << second << " equals " << sum << std::endl;
	//Floats

	float numA = 5.5f;
	float numB = 0.1f;
	float numSum = numA + numB;
	std::cout << numA << " plus " << numB << " equals " << numSum << std::endl;
	
	//cIn

	int userInput = 0;
	std::cin >> userInput;
		std::cout << "Here is your number: " << userInput << std::endl;

	// Problem A
		int numberA = 5;

		numberA = 9;
		numberA = 11;
		numberA = 14;

		std::cout << "A " << numberA << std::endl;
		system("pause");
	// Problem B
		int numberB = 10;
		numberB = 9;

		int thingB = 55;
		thingB = 22;

		std::cout << "B " << numberB << std::endl;
		system("pause");
	// Problem C
		int numberC = 3;
		numberC = 7;
		numberC = 1;

		int somethingC = 23;
		somethingC = 21;

		numberC = somethingC;

		std::cout << "C) " << numberC << std::endl;
		system("pause");

	// Problem D
		int numberD = 1;
		int somethingD = 3;

		numberD = somethingD;

		std::cout << "D) " << somethingD << std::endl;
		system("pause");
	//Problem E
		int x = 13;

		x = x / 2;

		std::cout << "E) " << x << std::endl;

	//Problem F
		float y = 13;

		y = y / 2;

		std::cout << "F)" << y << std::endl;

		system("pause");
	//Celcius to Fahrenheit
		
		float degCelsius = 78.0f;
		// change it equal to userinput
		std::cin >> degCelsius;
		float degFahrenheit = 0.0f; 
		degFahrenheit=degCelsius * 1.8f + 32;
		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius:    " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
		system("pause");

// Open Session
// Average of Five

		float a, b, c, d, e;    
		float avg;              
		avg = a = b = c = d = e = 0.0f; 
		std::cin >> a;
		std::cin >> b;
		std::cin >> c;
		std::cin >> d;
		std::cin >> e;
		avg = (a + b + c + d + e) / 5; // put all variables in () then divide by how many there are
		std::cout << "Average of Five" << std::endl;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << avg << std::endl;

		system("pause");

//Rectangle
		float rectWidth = 0.0f;  
		float rectHeight = 0.0f; 
		float rectArea = 0.0f;   

		rectArea = rectHeight * rectWidth;

		std::cout << "Enter a number for the height!";
		std::cin >> rectHeight;
		std::cout << "Enter a number for the width!";
		std::cin >> rectWidth;

		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectArea << std::endl;


// Number Swap

		int q = 13;
		int z = 24;
		int holder = q;
			q = z;
			z = holder;

		std::cout << "Number Swap" << std::endl;
		std::cout << "q is " << q << std::endl;
		std::cout << "z is " << z << std::endl;


		system("pause");

//Fun Facts About Your Age
		int years = 0;
		std::cout << "Hello! Please input how old you are for some fun facts!" << std::endl;
		std::cin >> years;
		int months;
		months = 12 * years;
		std::cout << "According to my calculations, you've been alive for " << months << " months!" << std::endl;
		
		system("pause");

	return 0;
}