#pragma once
#include "Account.h"
#include <cstdlib>
#include <ctime>
#include <vector>


std::string Password::pass0() {

	std::string password;
	unsigned short random = rand() % 10;
	password = (numbers[random]);
	return password;
}

std::string Password::pass1() {

	std::string password;
	unsigned short random = rand() % 26;
	password = lowerCase[random];
	return password;
}
std::string Password::pass2() {
	
	std::string password;
	unsigned short random = rand() % 26;
	password = upperCase[random];
	return password;
}
std::string Password::pass3() {

	std::string password;
	unsigned short random = rand() % 30;
	password = specialChars[random];
	return password;
}
std::vector<std::string> Password::createPassword() {
	srand(time(0));
	std::vector<std::string> password;
	unsigned short length = rand() % 20 + 4;
	unsigned short complicated = rand() % 4;

	for (int i = 0; i < length;i++)
	{
		if (complicated == 0) {
			password.push_back(pass0());
		}
		else if (complicated == 1) {
			unsigned short random = rand() % 2;
			if (random == 0)
			{
				password.push_back(pass0());
			}
			else {
				password.push_back(pass1());
			}
		}
		else if (complicated == 2) {
			unsigned short random = rand() % 3;
			if (random == 0) {
				password.push_back(pass0());
			}
			else if (random == 1) {
				password.push_back(pass1());
			}
			else if (random == 2) {
				password.push_back(pass2());
			}
		}
		else if (complicated == 3) {
			unsigned short random = rand() % 4;
			if (random == 0) {
				password.push_back(pass0());
			}
			else if (random == 1) {
				password.push_back(pass1());
			}
			else if (random == 2) {
				password.push_back(pass2());
			}
			else if (random == 3) {
				password.push_back(pass3());
			}
		}
	}
	return password;
}

std::vector<std::string> Password::createPassword(unsigned short length, unsigned short complicated) {
	
	std::vector<std::string> password;
	
	for (int i = 0; i < length;i++)
	{
		if (complicated == 0) {
			password.push_back(pass0());
		}
		else if (complicated == 1) {
			unsigned short random = rand() % 2;
			if (random == 0)
			{
				password.push_back(pass0());
			}
			else {
				password.push_back(pass1());
			}
		}
		else if (complicated == 2) {
			unsigned short random = rand() % 3;
			if (random == 0) {
				password.push_back(pass0());
			}
			else if(random == 1) {
				password.push_back(pass1());
			}
			else if (random == 2) {
				password.push_back(pass2());
			}
		}
		else if (complicated == 3) {
			unsigned short random = rand() % 4;
			if (random == 0) {
				password.push_back(pass0());
			}
			else if (random == 1) {
				password.push_back(pass1());
			}
			else if (random == 2) {
				password.push_back(pass2());
			}
			else if (random == 3) {
				password.push_back(pass3());
			}
		}
	}
	return password;
}
void Password::showPassword(std::vector<std::string> password) {
	for (int i = 0; i < password.size(); ++i) {
		std::cout << password[i];
	}
}

std::vector<std::string> Password::createPasswordWithMenu(Menu* ptrMenu) {
	clearConsole();
	int passwordMenuChoice;
	std::vector<std::string> password;
	do {
		clearConsole();
		passwordMenuChoice = ptrMenu->passwordMenu();
	} while (wrongInput(1, 6, passwordMenuChoice) != true);

	if (passwordMenuChoice >= 1 && passwordMenuChoice <= 5) {
		int complicated;
		int length;
		clearConsole();
		if (passwordMenuChoice == 1) {
			clearConsole();
			length = ptrMenu->passwordMenuOwnLength();
			clearConsole();
			complicated = ptrMenu->passwordMenuOwnComplicated();
		}
		else if (passwordMenuChoice == 2) {
			length = 6;
			complicated = 1;
		}
		else if (passwordMenuChoice == 3) {
			length = 10;
			complicated = 2;
		}
		else if (passwordMenuChoice == 4) {
			length = 16;
			complicated = 3;
		}
		else { // passwordMenuChoice == 5
			length = rand() % 20 + 4;
			complicated = rand() % 4;
		}
		clearConsole();
		password = createPassword(length, complicated);
		showPasswordWithMenu(ptrMenu,password);
		waitForEnter();
	}
	
	return password;
}
void Password::showPasswordWithMenu(Menu* ptrMenu, std::vector<std::string> password) {
	ptrMenu->showPassword();
	showPassword(password);
}

bool Account::operator==(Account other) {
	return id == other.id && username == other.username && password == other.password;
}

void Account::saveToFile(std::string filename) {
	std::ofstream file(filename);
	if (file.is_open()) {
		file << id << " " << username << " " << password << std::endl;
		std::cout << "Your account has been saved into file: " << filename << std::endl;
		file.close();
	}
	else {
		std::cerr << "Error: Cannot open file." << std::endl;
	}
}
void Account::createAccountWithMenu(Menu* ptrMenu) {
	clearConsole();
	int accountMenuChoice;

	do {
		clearConsole();
		accountMenuChoice = ptrMenu->accountMenu();

	} while (wrongInput(1, 2, accountMenuChoice) != true);


	Account acc;

	if (accountMenuChoice == 1) {


		clearConsole();
		std::string username = ptrMenu->newAccountUsername();
		acc.setUsername(username);
		clearConsole();
		accountMenuChoice = ptrMenu->newAccountPasswordCreator();
		if (accountMenuChoice == 1) {

			clearConsole();
			std::vector<std::string> password;
			password = generatedPassword.createPasswordWithMenu(ptrMenu);
			std::string concatenatedPassword = "";

			for (const auto& passPart : password) {
				concatenatedPassword += passPart;
			}

			acc.setPassword(concatenatedPassword);
			clearConsole();
			ptrMenu->showAccount();
			std::cout << "ID: ";std::cout << acc.getID();
			std::cout << "\nLogin: ";std::cout << acc.getUsername();
			std::cout << "\nPassword: ";std::cout << acc.getPassword();
			waitForEnter();
		}
		else if (accountMenuChoice == 2) {
			clearConsole();
			acc.setPassword(ptrMenu->newAccountPassword());
			clearConsole();
			ptrMenu->showAccount();
			std::cout << "ID: ";std::cout << acc.getID();
			std::cout << "\nLogin: ";std::cout << acc.getUsername();
			std::cout << "\nPassword: ";std::cout << acc.getPassword();
			waitForEnter();

		}
		char yn;
		std::cout << "Do you want to save your account into a file? (y/n): ";std::cin >> yn;
		if (yn == 'y') {
			acc.saveToFile(acc.getUsername());
			waitForEnter();
		}
	}


}