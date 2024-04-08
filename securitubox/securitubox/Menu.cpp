#pragma once
#include "Menu.h"


int Menu::showMenu() {
	
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]      SECURITY BOX      []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[] 1. PASSWORD GENERATOR  []\n";
	std::cout << "[] 2. CREATE ACCOUNT      []\n";
	std::cout << "[] 3. EXIT                []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> choice;
	return choice;
}

int Menu::passwordMenu() {
	
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]   PASSWORD GENERATOR   []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[] 1. CREATE PASSWORD     []\n";
	std::cout << "[] 2. EASY PASSWORD       []\n";
	std::cout << "[] 3. MEDIUM PASSWORD     []\n";
	std::cout << "[] 4. HARD PASSWORD       []\n";
	std::cout << "[] 5. RANDOM PASSWORD     []\n";
	std::cout << "[] 6. BACK                []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> choice;
	return choice;
}

int Menu::passwordMenuOwnLength() {
	int length;
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[]             CREATE YOUR OWN PASSWORD             []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[] WE NEED TO KNOW HOW LONG YOUR PASSWORD           []\n";
	std::cout << "[] HAS TO BE.                                       []\n";
	std::cout << "[] REMEMBER: LONGER = SAFER                         []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[] 0. BACK                                          []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << ">> Type length: ";std::cin >> length;
	return length;

}
int Menu::passwordMenuOwnComplicated() {
	int complicated;
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[]             CREATE YOUR OWN PASSWORD             []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[] WE NEED TO KNOW HOW MUCH COMPLICATED             []\n";
	std::cout << "[] YOUR PASSWORD HAS TO BE.                         []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[] 0. ONLY NUMBERS                                  []\n";
	std::cout << "[] 1. NUMBERS AND LOWER CASE                        []\n";
	std::cout << "[] 2. NUMBERS, LOWER AND UPPER CASE                 []\n";
	std::cout << "[] 3. NUMBERS, LOWER AND UPPER CASE, SPECIAL CHARS  []\n";
	std::cout << "[] 4. BACK                                          []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> complicated;
	return complicated;

}

void Menu::showPassword() {
	
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[]                 YOUR PASSWORD                    []\n";
	std::cout << "[]                                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "\n";
	std::cout << "PASSWORD: "; 
}
int Menu::accountMenu() {

	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]    ACCOUNT CREATOR     []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[] 1. NEW ACCOUNT         []\n";
	std::cout << "[] 2. BACK                []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> choice;
	return choice;
}
std::string Menu::newAccountUsername() {
	std::string username;
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]    ACCOUNT CREATOR     []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]     TYPE USERNAME      []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> username;
	return username;
}
std::string Menu::newAccountPassword() {
	std::string password;
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]    ACCOUNT CREATOR     []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << "[]                        []\n";
	std::cout << "[]     TYPE PASSWORD      []\n";
	std::cout << "[]                        []\n";
	std::cout << "[][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> password;
	return password;
}

int Menu::newAccountPasswordCreator() {
	
	std::cout << "[][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                  []\n";
	std::cout << "[]         ACCOUNT CREATOR          []\n";
	std::cout << "[]                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                  []\n";
	std::cout << "[]   TYPE PASSWORD                  []\n";
	std::cout << "[]   OR USE OUR PASSWORD CREATOR    []\n";
	std::cout << "[]   1. GO TO CREATOR               []\n";
	std::cout << "[]   2. TYPE OWN PASSWORD           []\n";
	std::cout << "[]                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][]\n";
	std::cout << ">> Type: ";std::cin >> choice;
	return choice;
}

void Menu::showAccount() {
	std::cout << "[][][][][][][][][][][][][][][][][][][]\n";
	std::cout << "[]                                  []\n";
	std::cout << "[]           YOUR ACCOUNT           []\n";
	std::cout << "[]                                  []\n";
	std::cout << "[][][][][][][][][][][][][][][][][][][]\n";
	
}