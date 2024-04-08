#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "functions.h"
#include "Menu.h"

class Password : Functions
{
private:
	const std::string numbers[10] = { "0","1","2","3","4","5","6","7","8","9" }; // tablica liczb
	const std::string lowerCase[26] = { "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z" }; // tablica malych liter
	const std::string upperCase[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" }; // tablica duzych liter
	const std::string specialChars[30] ={ "!", "#", "$", "%", "&", "'", "(", ")", "*", "+", "-", ".", "/", ":", ";", "<", "=", ">", "?", "@", "[", "]", "^", "_", "`", "{", "|", "}", "~"}; // tablica znakow specjalnych

public:

	std::vector<std::string> createPassword(); // funkcja do tworzenia losowego hasla
	std::vector<std::string> createPassword(unsigned short length, unsigned short complicated); // funkcja do tworzenia hasla
	void showPassword(std::vector<std::string> password); // wyswietla utworzone haslo
	std::string pass0(); // funkcja do losowania liczby
	std::string pass1(); // funkcja do losowania malej litery
	std::string pass2(); // funkcja do losowania duzej litery
	std::string pass3(); // funkcja do losowania znaku specjalnego
	std::vector<std::string> createPasswordWithMenu(Menu* ptrMenu); // funkcja do tworzenia hasla z zaimplementowanym menu
	void showPasswordWithMenu(Menu* ptrMenu, std::vector<std::string> password); // funkcja do wyswietlania hasla z menu
};

class Account : Functions
{
private:
	int id;
	std::string username;
	std::string password;
	Password generatedPassword;

public:
	Account() {
		id = 0;
		username = " ";
		password = " ";
	}// konstruktor
	~Account() {
	}
	//destruktor
	
	int getID() { return id; } // wyci¹ganie ID
	void setID(int newID); // ustawianie ID
	std::string getUsername() { return username; } // wyciaganie loginu
	void setUsername(std::string newUsername) { username = newUsername; } // ustawianie loginu
	std::string getPassword() { return password; } // wyciaganie hasla
	void setPassword(std::string newPassword) { password = newPassword; } // ustawianie hasla
	
	bool operator==(Account other); // przeciazenie operatora
	/* Operator == porównuje dwa obiekty klasy Account ze sob¹. Zwraca true,
jeœli identyfikator, nazwa u¿ytkownika i has³o obu obiektów s¹ równe, a w przeciwnym razie zwraca false.
Przyk³ad : if (account1 == account2) */
	
	void saveToFile(std::string filename); // zapis danych konta do pliku.
	void createAccountWithMenu(Menu* ptrMenu); // funkcja do tworzenia konta z zaimplementowanym menu
};


