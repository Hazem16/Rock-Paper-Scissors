#include <cctype>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>

int main()
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int random_number = std::rand() % 3;
    std::string computer_choice;
    std::string player_choice;

    if (random_number == 0){
        computer_choice = "Rock";
    }
    else if (random_number == 1){
        computer_choice = "Paper";
    }
    else if (random_number == 2){
        computer_choice = "Scissors";
    }

    std::cout << "Choose Rock, Paper or Scissors: ";
    std::cin >> player_choice;

    std::transform(player_choice.begin(), player_choice.end(), player_choice.begin(), ::tolower);

    if (player_choice == computer_choice){
        std::cout << "Tie!\n";
    }
    else if (player_choice == "rock" && computer_choice == "Scissors"){
        std::cout << "Bot chose Scissors\n";
        std::cout << "You Win!\n";
    }
    else if (player_choice == "rock" && computer_choice == "Paper"){
        std::cout << "Bot chose Paper!\n";
        std::cout << "You Lose!\n";
    }
    else if (player_choice == "paper" && computer_choice == "Rock"){
        std::cout << "Bot chose Rock\n";
        std::cout << "You Win!\n";
    }
    else if (player_choice == "paper" && computer_choice == "Scissors"){
        std::cout << "Bot chose Scissors\n";
        std::cout << "You Lose!\n";
    }
    else if (player_choice == "scissors" && computer_choice == "Rock"){
        std::cout << "Bot chose Rock\n";
        std::cout << "You Lose!\n";
    }
    else if (player_choice == "scissors" && computer_choice == "Paper"){
        std::cout << "Bot chose Paper\n";
        std::cout << "You Win!\n";
    }
    else{
        std::cout << "Invalid input\n";
    }
}
