//Montana Nicholas
//Nathan Mas
#include <iostream>

char PrintMenu(char t_newPrintMenu);
int main()
{
	return 1;
}

char printMenu(char t_newPrintMenu)//Nathan
{
	char choice = ' ';
	std::cout << "Please enter an upper case letter to convert from left to right/nand lower to convert from right to left/n/n";
	std::cout << "[D] Mpg <---> L/100km [d]" << std::endl;
	std::cout << "[E] Kilograms <---> Stone & Pounds [e]" << std::endl;
	std::cout << "[F] Celsius <---> Fahrenheit [f]" << std::endl;
	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;
	return choice;
}




char printMenu(char t_newPrintMenu);
int main2()
{
	return 1;
}

char printMenu() //Montana

{
	char choice = ' ';
	std::cout << "Please enter an upper case letter to convert from left to right\nand lower to convert from right to left\n\n" << std::endl;
	std::cout << "[A] Degrees <---> Radians [a]" << std::endl;
	std::cout << "[B] Centimeters <---> Feet & Inches [b]" << std::endl;
	std::cout << "[C] Litres <---> Gallons [c]" << std::endl;

	std::cout << "[Q] Exit [---] Exit [q]" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> choice;

	return choice;
}