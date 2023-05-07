#include "menu.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

void Menu::display_menu()
{
    std::cout << "Display Menu:" << std::endl;
    std::cout << "1. Display Journal" << std::endl;
    std::cout << "2. Calculator" << std::endl;
    std::cout << "3. Guess Number Game" << std::endl;
    std::cout << "0. Quit" << std::endl;
}
void::Menu::read_file()
{
    std::ifstream file("C:\\Users\\fabol\\OneDrive\\Escritorio\\Programming\\Applied Programming\\"
                       "Interactive App For Kids\\Journal.txt"); // Open the file.

    if (!file.is_open()) { // Check if the file was opened successfully.
        std::cout << "Failed to open file." << std::endl;
    }

    std::string line;
    while (std::getline(file, line)) { // Read each line of the file.
        std::cout << line << std::endl; // Print the line to the console.
    }

    file.close(); // Close the file.
}
void Menu::display_calculator()
{
    float num1, num2;
    std::string math_symbol;

    // Prompt the user for input
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> math_symbol;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the result based on the user's input
    float result = 0;

    if (math_symbol == "+")
    {
        result = num1 + num2;
    }
    else if (math_symbol == "-")
    {
        result = num1 - num2;
    }
    else if (math_symbol == "*")
    {
        result = num1 * num2;
    }
    else if (math_symbol == "/")
    {
        result = num1 / num2;
    }
    else
    {
        std::cout << "Invalid operator" << std::endl;
    }

    // Print the result to the console
    std::cout << "Result: " << result << std::endl;
}
void Menu::display_number_game()
{
    // Seed the random number generator
    srand(time(nullptr));

    int number;

    std::cout << "Pick a number: ";
    std::cin >> number;

    // Generate a random number between 1 and the choice of the user.
    int secretNumber = rand() % number + 1;

    // Keep track of the number of guesses
    int numGuesses = 0;

    // Keep asking the user to guess the number until they guess it right.
    int guess;
    do {
        // Prompt the user for a guess
        std::cout << "Guess a number between 1 and " << number << ": ";
        std::cin >> guess;

        // Increment the number of guesses.
        numGuesses++;

        // Check if the guess is correct, too low, or too high.
        if (guess == secretNumber) {
            std::cout << "Congratulations, you guessed the number in " << numGuesses << " guesses!" << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low, try again." << std::endl;
        } else {
            std::cout << "Too high, try again." << std::endl;
        }
    } while (guess != secretNumber);
}
std::string Menu::return_secret_username()
{
    std::string secret_username = "Danicat";
    return secret_username;

}
std::string Menu::return_secret_password()
{
    std::string secret_password = "september19";
    return secret_password;
}
