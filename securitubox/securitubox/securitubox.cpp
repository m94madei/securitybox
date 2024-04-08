#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include "Menu.h"
#include "Account.h"
#include "functions.h"

int main()
{
    int menuChoice;
    srand(time(0));

    Menu menu;
    Password pass;
    Functions func;
    Account acc;

    std::vector<std::string> password;
    do {
        func.clearConsole();
        menuChoice = menu.showMenu();
        func.wrongInput(1, 3, menuChoice);

        switch (menuChoice) {
        case 1:
            pass.createPasswordWithMenu(&menu);
            break;
        case 2:
            acc.createAccountWithMenu(&menu);
            
            break;
        case 3:
            break;
        default:
            func.wrongInput();
            break;
        }
    } while (menuChoice != 3);
    
    return 0;
}