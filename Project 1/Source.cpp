//Luis Reyes
//CS-210
//9-16-23
//Project 1

using namespace std;
#include <iostream>
#include <iomanip>
#include <string>
#include "Clock.h"

void printClocks();
void printMenu();


// switch statment to get user input in the menu
void userInput(int userChoice) {
	switch (userChoice) {
		case 1:
			addHour();
			break;
		case 2:
			addMinute();
			break;
		case 3:
			addSecond();
			break;
		case 4:
			cout << "\n\t   Good Bye   " << std::endl;
			cout << endl;
			break;
		default:
			cout << "That is not going to work, please try either 1,2,3,or 4" << std::endl;
			cout << endl;
			break;
		}
	}

//output of both 12 and 24 hour formatted clocks
void printClocks() {
	
	std::cout << "12-hour clock: " << std::endl;
	std::cout << get12HourFormat() << std::endl;
	std::cout << endl;
	std::cout << "24-hour clock: " << std::endl;
	std::cout << get24HourFormat() << std::endl;
	std::cout << "\n\n\n";

}

//options menu
void printMenu() {
	std::cout << "   Main Menu:" << std::endl;
	std::cout << "****************************" << std::endl;
	std::cout << "1 - Add One Hour" << std::endl;
	std::cout << "2 - Add One Minute" << std::endl;
	std::cout << "3 - Add One Second" << std::endl;
	std::cout << "4 - Exit Program" << std::endl;
	std::cout << "****************************" << std::endl;
}




int main() {
	int hours;
	int minutes;
	int seconds;
	string getSuffix;
	int userChoice;
	
	printClocks();

	printMenu();
	std::cin >> userChoice;

	
	//While loop to run the program
	while (userChoice != 4) {
		system("cls");

		userInput(userChoice);

		printClocks();

		printMenu();

		std::cin >> userChoice;
	}

	userInput(userChoice);
	




return 0;
}


