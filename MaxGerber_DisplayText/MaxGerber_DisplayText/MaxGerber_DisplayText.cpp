/*
Max Gerber - 9/21/17  3
Assignment Name: Display Text
Intro to C++ Visual Studios Creating New Project
Displaying text to the console from code
*/
//Libraries
#include <iostream> // endl << >> cin count
#include <conio.h> // gives access to _kbhit() and _getch() for pause() function

//Namespaces
using namespace std;

//Functions
void pause() { // acts as system("pause")
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

//Main
void main() {
	//Display Text
	cout << "~ Hello World! ~" << endl;
	pause(); // to see what was displayed

}