#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main()
{	//Title Screen Sequence
	SetConsoleTitle("HangMan!");
	system("color E");

	cout << "Welcome" << endl;
	Sleep(1000);
	cout << "To..." << endl;
	Sleep(1500);

	cout << "            _______  _        _______  _______  _______  _        _ " << endl;
	Sleep(200);
	cout << "  |\\     /|(  ___  )( (    /|(  ____ \(       )(  ___  )( (    /|( )" << endl;
	Sleep(200);
	cout << "  | )   ( || (   ) ||  \\  ( || (    \/| () () || (   ) ||  \\  ( || |" << endl;
	Sleep(200);
	cout << "  | (___) || (___) ||   \\ | || |      | || || || (___) ||   \\ | || |" << endl;
	Sleep(200);
	cout << "  |  ___  ||  ___  || (\\ \\) || | ____ | |(_)| ||  ___  || (\\ \\) || |" << endl;
	Sleep(200);
	cout << "  | (   ) || (   ) || | \\   || | \\_  )| |   | || (   ) || | \\   |(_)" << endl;
	Sleep(200);
	cout << "  | )   ( || )   ( || )  \\  || (___) || )   ( || )   ( || )  \\  | _ " << endl;
	Sleep(200);
	cout << "  |/     \\||/     \\||/    )_)(_______)|/     \\||/     \\||/    )_)(_)" << endl;
	Sleep(200);
	cout << "                                                                    " << endl;
	//End Title Sequence



	system("pause");
	return 0;
}