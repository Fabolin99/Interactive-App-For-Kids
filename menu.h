#ifndef AUTHENTICATION_SYSTEM_MENU_H
#define AUTHENTICATION_SYSTEM_MENU_H
#include <string>

class Menu {
public:
    //Methods:
    static void read_file();
    static void display_calculator();
    static void display_number_game();
    static std::string return_secret_username();
    static std::string return_secret_password();
    static void display_menu();
};
#endif //AUTHENTICATION_SYSTEM_MENU_H
