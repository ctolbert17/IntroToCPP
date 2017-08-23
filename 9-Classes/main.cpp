#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleTitle("Number Guessing Game");
	int Guesses = 5;
	int Guess;
	int Answer;
	bool WinLoss = false;
	system("color B");
	srand(time(NULL));
	Answer = rand() % 50 + 1;
	cout << "//      _   __                __                   " << endl;
	Sleep(600);
	cout <<	"//     / | / __  ______ ___  / /_  ___  _____      " << endl;
	Sleep(600);
	cout <<	"//    /  |/ / / / / __ `__ \\/ __ \\/ _ \\/ ___/      " << endl;
	Sleep(600);
	cout <<	"//   / /|  / /_/ / / / / / / /_/ /  __/ /          " << endl;
	Sleep(600);
	cout << "//  /_/_______,_/_/ /_/ /_/_.___/\\___/_/           " << endl;
	Sleep(600);
	cout << "//    / ______  _____  __________(_____  ____ _    " << endl;
	Sleep(600);
	cout << "//   / / __/ / / / _ \\/ ___/ ___/ / __ \\/ __ `/    " << endl;
	Sleep(600);
	cout << "//  / /_/ / /_/ /  __(__  (__  / / / / / /_/ /     " << endl;
	Sleep(600);
	cout << "//  \\________,_/\\___/____/____/_/_/ /_/\\__, /      " << endl;
	Sleep(600);
	cout << "//    / ________ _____ ___  ___       /____/       " << endl;
	Sleep(600);
	cout << "//   / / __/ __ `/ __ `__ \\/ _ \\                   " << endl;
	Sleep(600);
	cout <<	"//  / /_/ / /_/ / / / / / /  __/                   " << endl;
	Sleep(600);
	cout <<	"//  \\____/\\__,_/_/ /_/ /_/\\___/                    " << endl;
	Sleep(600);
	cout <<	"//                                                " << endl;
	Sleep(600);

	cout << "Welcome to my Number Guessing Game! :)\n";
	cout << "I will think of a number between 1 and 50. Can you guess the number in " << Guesses << " tries?\n";

	for (int i = 0; i < Guesses; i++)
	{
		cout << "Guess #" << i + 1 << ": ";
		cin >> Guess;
		if (Guess != Answer)
		{
			if (Guess > Answer)
				cout << "Too high!\n";
			else
				cout << "Too low!\n";
		}
		else
		{
			cout << "You did it! Nice job!\n";
			system("pause");
			bool WinLoss = true;
			return 0;
		}
	}
	cout << "Oh no! You couldn't guess it! Dont worry keep trying got this! :)\n";
	cout << "The answer was: " << Answer << endl;

	system("pause");
	return 0;
}   
              