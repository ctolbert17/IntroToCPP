#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

std::string words[] = { "hello", "world", "because", "buzzard", "espionage","subway", "xylophone", "zip", "zodiac", "yacht", "jukebox", "aardvark", "numbskull", "khaki", "mnemonic", "quipping", "bump", "bamp", "waxes", "quaffing", "queuing", "skydiving" };

void user_guess(std::string &current, std::string &word) {
	std::cout << "" << std::endl;
	Sleep(600);
	std::cout << "Status: " << current << std::endl;
	char guess;
	std::cin >> guess;
	if (word.find(guess) != std::string::npos &&
		current.find(guess) == std::string::npos) {
		char *c, *w;
		for (c = &current[0], w = &word[0];
			c < &current[0] + current.length();
			++c, ++w) {
			*c = *w == guess ? *w : *c;
		}
	}
	else {
		std::cout << "You messed up! - " << guess << " is not in the word. Try again scrub!" << std::endl;
	}
}

int main()
{
	//Begin Title Sequence
	{
		SetConsoleTitle("HangMan!");
		system("color E");

		//Title Screen Sequence
		std::cout << "Welcome \n" << endl;
		Sleep(1000);
		std::cout << "To... \n" << endl;
		Sleep(1500);
		std::cout << "            _______  _        _______  _______  _______  _        _ " << endl;
		Sleep(205);
		std::cout << "  |\\     /|(  ___  )( (    /|(  ____ \ (       )(  ___  )( (    /|( )" << endl;
		Sleep(205);
		std::cout << "  | )   ( || (   ) ||  \\  ( || (    \ /| () () || (   ) ||  \\  ( || |" << endl;
		Sleep(205);
		std::cout << "  | (___) || (___) ||   \\ | || |      | || || || (___) ||   \\ | || |" << endl;
		Sleep(205);
		std::cout << "  |  ___  ||  ___  || (\\ \\) || | ____ | |(_)| ||  ___  || (\\ \\) || |" << endl;
		Sleep(205);
		std::cout << "  | (   ) || (   ) || | \\   || | \\_  )| |   | || (   ) || | \\   |(_)" << endl;
		Sleep(205);
		std::cout << "  | )   ( || )   ( || )  \\  || (___) || )   ( || )   ( || )  \\  | _ " << endl;
		Sleep(205);
		std::cout << "  |/     \\||/     \\||/    )_)(_______)|/     \\||/     \\||/    )_)(_)" << endl;
		Sleep(205);
		std::cout << "                                                                    " << endl;
		//End Title Sequence
		//Begin rules/expalnation//

		std::cout << "Welcome to HangMan! A game of word guessing. " << std::endl;
		Sleep(1900);
		std::cout << "With a more violent ending should you LOSE!" << std::endl;
		Sleep(1900);
		std::cout << "The rules are simple: \n" << std::endl;
		Sleep(1900);
		std::cout << "1. Guess the word I give out in *'s \n";
		Sleep(1900);
		std::cout << "2. As the words progressively get harder to guess, think outside the box ;) \n";
		Sleep(1900);
		std::cout << "3. Keep in mind the words in this game are NOT case sensitive! \n";
		Sleep(1900);
		std::cout << "4. Dont mess up!!" << std::endl;
		Sleep(1900);
		std::cout << "5. HAVE FUN AND DON'T HANG THE MAN!!!\n";
		Sleep(2000);

		//End Rules/Explanation
	}

	for (std::string word : words) {
		int remaining = 5;
		std::string current = std::string(word.length(), '*');
		std::string old_state;
		bool broke = false;
		while (remaining > 0) {
			old_state = current;
			user_guess(current, word);
			if (old_state == current) {
				--remaining;
				std::cout << "Remaining guesses: " << remaining << std::endl;
			}
			if (current == word) {
				std::cout << "You did it! the word was: " << word <<  "Nice job!" << std::endl;
				broke = true;
				break;
			}
		}
		if (!broke) {
			std::cout << "You hung the man! You stink! The word was: \n" << word << std::endl;
			system("pause");
		}
	}
	std::cout << "Thanks for playing! You've proven yourself a true hero and did not hang the man :)" << std::endl;
	return 0;
}
