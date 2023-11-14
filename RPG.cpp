#include <iostream>
#include <ctime>
#include <cmath>
#include "Player.hpp"

class World {
private:
    std::string weather;
    int day = 0;

public:
    std::string getWeather() {
        return weather;
    }

    void setWeather(std::string a) {
        this->weather = a;
    }
};

// Function to get user input for race and class
int getUserInput(const char* prompt, int min, int max) {
    int choice;
    do {
        std::cout << prompt;
        std::cin >> choice;
    } while (choice < min || choice > max);
    return choice-1;
};

int main() {
    Player player;
    int temp;
    std::cout << "Enter player's name: ";
    std::getline(std::cin, player.name);
    std::cout << "Enter player's age: ";
    std::cin >> temp;
    player.setAge(temp);

   // Get player's race
    std::cout << "Choose a race:" << std::endl;
    for (int i = Orc; i <= Karen; ++i) {
        std::cout << i+1 << ". " << player.enumToString(static_cast<Races>(i)) << std::endl;
    }
    int raceChoice = getUserInput("Enter the number corresponding to the race: ", Orc, Karen);
    player.setRace(static_cast<Races>(raceChoice));

    // Get player's class
    std::cout << "Choose a class:" << std::endl;
    for (int i = Thief; i <= Bard; ++i) {
        std::cout << i+1 << ". " << player.enumToStringC(static_cast<Classes>(i)) << std::endl;
    }
    int classChoice = getUserInput("Enter the number corresponding to the class: ", Thief, Bard);
    player.setClass(static_cast<Classes>(classChoice));


    // Display player information
    std::cout << "\nPlayer Information:" << std::endl;
    std::cout << "Name: " << player.name << std::endl;
    std::cout << "Age: " << player.getAge() << std::endl;
    std::cout << "Race: " << player.getRace() << std::endl;
    std::cout << "Class: " << player.getClass() << std::endl;

    return 0;
}
