#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

//void addStrings(char dest[], int size, char src1[], char src2[]);
//{
//	
//	 //copies data from src1 into the dst buffer
//	strcpy_s(dst, size, src1);
//	//concatenates data from src2 into the dst buffer
//	strcat_s(dst, size, src2);
//
// 	//result should be src1+src2 
//}

//void main()
//{
//	//definition
//	char buffer[80] = {0};
//
//	//	instantiate 
//	char cstring[] = "Dinos are cool!";
//
//
//	//	assignment
//	/*buffer = "String";*/
//
//	strcpy_s(buffer, "String"); //Right: name, Left: Value
//
//	//Length
//	int length = strlen(buffer);
//
//	// concatenation-put two things together
//	strcat_s(buffer, 80, cstring);
//
//	//Compare
//	
//	int result = strcmp(buffer, cstring);
//
//}
int main()
{
	char name[23];
	std::cout << "Enter your name!" << std::endl;
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;

	system("pause");
}

	int fourth()
	
	{
		int input;
	cout << "Please enter a favorite color: ";
	cin >> input;
	if (strcmp(input, "blue")) == 0)
	system("pause");
}

int second()
{
	int input;
	std::cout << "Enter some words!" << std::endl;
	std::cin >> input;
	char buffer[80] = { 0 };
	for (int i = 0; i < strlen(input); ++i)
	{
		(input[i] != ' ' && input[i] != '\n');
		buffer[j++] = input[i];
	}
	cout << buffer << endl;
	system("pause");
}
//Open

	int third()
	{
		std::string s;
		std::cout << "Enter a word!" << std::endl;
		std::cin >> s;
		if (equal(s.begin(), s.begin() + s.size() / 2, s.rbegin()))
			std::cout << s << " is a palindrome.\n";
		else
			std::cout << s << " is NOT a palindrome.\n";
		system("pause");
	}
bool errorCheck(string);
void firstLetter(string);
void wordTranslate(string);

int five()
{
	string wordInput = ""; //array
	bool inputError = false;
	char runSentinel = 'y';
	cout << "			----------------------\n" << endl;
	cout << "			PIG LATIN TRANSLATOR \n" << endl;
	cout << "			----------------------\n" << endl;
	cin.get();

	cout << "Welcome to the Pig Latin Translator. \n" << endl;
	cout << "Would you like to translate a word? (y/n)";
	cin >> runSentinel;

	do
	{

		if (runSentinel == 'y')
		{
			cout << "Please enter the word you would like to be translated, \n" << endl;
			cout << "and please use only lower case letters. \n" << endl;
			cin >> wordInput;
			inputError = errorCheck(wordInput);
		}

		if (inputError == false)
		{
			firstLetter(wordInput);

		}
		cin.ignore();
		cout << "Would you like to translate a word? (y/n)";
		cin >> runSentinel;


	} while (runSentinel != 'n');
	return 0;
}

bool errorCheck(string wordInput)
{
	bool errorVerif = false;
	int Length = wordInput.length();
	int Counter = 0;
	char *specificLetter = &wordInput.at(0);

	while (Counter < Length && errorVerif == false)
	{
		if (!isalpha(*specificLetter))
		{
			cout << *specificLetter << "is not an acceptable entry. Please re-enter your word.";
			errorVerif = true;
		}

		if (isspace(*specificLetter))
		{
			cout << *specificLetter << "is not an acceptable entry. Please re-enter your word.";
			errorVerif = true;
		}

		cout << "*specificLetter:" << *specificLetter << endl;
		*specificLetter++;
		Counter++;

	}
	return errorVerif;
}

void firstLetter(string wordInput)
{
	char firstLetter;
	firstLetter = wordInput.at(0);

	if (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u')
	{
		cout << "In Pig Latin, that would be " << wordInput << "way" << endl;
	}
	else
	{
		wordTranslate(wordInput);
	}
}

void wordTranslate(string wordInput)
{
	char firstLetter;
	char lastLetter = wordInput.length();

	firstLetter = wordInput.at(0);
	string otherLetters = wordInput.substr((1), (lastLetter - 1));
	cout << "In Pig Latin, that would be " << otherLetters << firstLetter << "ay." << endl;
}
int main()
{
	char first[20];
	char second[30];

		std::cout << "Enter your first name!" << std::endl;
		std::cin >> first;
		std::cout << "Now enter your last name!" << std::endl;
		std::cin >> second;
		std::cout << "Hello " << first << " " << second << "!" << std::endl;
	
		system("pause");
}