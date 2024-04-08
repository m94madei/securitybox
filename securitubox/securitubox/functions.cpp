#pragma once
#include "functions.h"
#include <cstdlib>
#include <iostream>

void Functions::clearConsole() {
#ifdef _WIN32
    system("cls"); // Dla systemu Windows
#else
    // Dla systemów Unix (Linux, macOS)
    system("clear");
#endif
}

void Functions::waitForEnter() {
    std::cout << std::endl;
    std::cout << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

bool Functions::wrongInput(int a, int b, int choice) {
    if (choice < a || choice > b) {
        std::cout << "Wrong input. Please enter a number between " << a << " and " << b << "." << std::endl;
        waitForEnter();
        return false;
    }
    return true;
}
void Functions::wrongInput() {
    std::cout<<"Wrong input." << std::endl;
}

std::string vectorToString(const std::vector<std::string>& vec) {
    std::string result;
    for (const auto& str : vec) {
        result += str;
    }
    return result;
}
