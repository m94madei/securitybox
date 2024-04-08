#pragma once
#include<vector>
#include<iostream>
class Functions
{
public:
	void clearConsole(); // funkcja do czyszczenia konsoli
	void waitForEnter(); // funkcja do wstrzymywania programu az uzytkownik nacisnie Enter
	bool wrongInput(int a, int b, int choice); // funkcja do sprawdzania poprawnosci danych wejsciowych w menu
	void wrongInput(); // funckja bezparametrow, wyswietla wrong input
	std::string vectorToString(const std::vector<std::string>& vec); // konwerter z vectora na string
};

