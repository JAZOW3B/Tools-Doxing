// AutoDox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>
#include <windows.h>
#include <shellapi.h>

int main()
{
    std::string option;
    std::cout << "[1] Get Address & IP of a discord user\n[2] Get Email & IP of an instagram user\n\nEnter your option: ";
    std::getline(std::cin, option);
	int i = std::stoi(option);
	std::string option1;
	std::string option2;
	std::system("cls");




	switch(i)
	{
	case 1:
		std::cout << "User id: ";

		std::getline(std::cin, option1);
		std::cout << "Fetching user details\n";

		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		std::cout << "You got pranked lmao";
		ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);

		while (true) {

		}
		break;
	case 2:
		std::cout << "Username: ";

		std::getline(std::cin, option2);
		std::cout << "Fetching user details\n";

		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		std::cout << "You got pranked lmao";
		ShellExecute(0, 0, L"https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_SHOW);

		while (true) {

		}
		break;

	}
	


	
	}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
