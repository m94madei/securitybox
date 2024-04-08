#pragma once
#include "functions.h"
#include <iostream>
#include <vector>


class Menu
{
private:
	
	
public:
	
	int choice;
	int showMenu(); // wyswietla podstawowe menu
	int passwordMenu(); // wyswietla menu do tworzenia hasel
	int passwordMenuOwnLength(); // menu wyboru dlugosci hasla
	int passwordMenuOwnComplicated(); // menu wyboru skomplikowania hasla
	int accountMenu(); // menu tworzenia konta id | user | password
	std::string newAccountUsername(); // menu do tworzenia nazwy uzytkownika
	std::string newAccountPassword(); // menu do tworzenia hasla uzytwkonika
	int newAccountPasswordCreator(); // menu do wyboru tworzenia hasla z poziomu tworzenia kont
	void showPassword(); // wyswietlanie hasla w menu
	void showAccount();  // wyswietlanie konta
};

