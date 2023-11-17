//Montana Nicholas
//Nathan Mas





























char printmenu(char t_newprintmenu);
#include <iostream>
int main()
{
	return 1;
}

char printmenu()
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