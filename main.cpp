#include <iostream>
#include <string>
#include "menu.h"

int main() {
    int user_choice = -1;
    std::string user_name;
    std::string password;

//    Verifies if the user has the necessary credentials;
    std::cout << "What is your username? ";
    std::cin >> user_name;
    std::cout << "What is your password? ";
    std::cin >> password;

    if (user_name == Menu::return_secret_username() and password == Menu::return_secret_password())
    {
        std::cout << "You Are authenticated" << std::endl;

//        The program contains a loop that allows to select different options until the program is quit.
        while(user_choice != 0)
        {
            Menu::display_menu();
            std::cout << "Choice: " << std::endl;
            std::cin >> user_choice;

            if (user_choice == 1)
            {
                Menu::read_file();
            }
            else if(user_choice == 2)
            {
                Menu::display_calculator();
            }
            else if(user_choice == 3)
            {
                Menu::display_number_game();
            }
        }
    }
    else
    {
        std::cout << "Sorry, you do not have the credentials!" << std::endl;
    }
}
