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
    } while (choice < min || choice > (max + 1));
    return choice - 1;
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
    std::cout << "----------- Player Information: -----------" << std::endl;
    std::cout << "Name: " << player.name << std::endl;
    std::cout << "Age: " << player.getAge() << std::endl;
    std::cout << "Race: " << player.getRace() << std::endl;
    std::cout << "Class: " << player.getClass() << std::endl;
    std::cout << "Level: " << player.getLevel() << std::endl;
    std::cout << "-------------- Player Stats: --------------" << std::endl;
    std::cout << "MAX Health: " << player.getHealthMax() << std::endl;
    std::cout << "MAX Stamina: " << player.getStaminaMax() << std::endl;
    std::cout << "MAX Mana: " << player.getManaMax() << std::endl;
    std::cout << "Physical Defense: " << player.getDefensePhy() << std::endl;
    std::cout << "Magical Defense: " << player.getDefenseMag() << std::endl;
    std::cout << "Resistance: " << player.getResistance() << std::endl;
    std::cout << "Strenght: " << player.getStrength() << std::endl;
    std::cout << "Dexterity: " << player.getDexterity() << std::endl;
    std::cout << "Magic: " << player.getMagic() << std::endl;
    std::cout << "Faith: " << player.getFaith() << std::endl;
    std::cout << "Intelligence: " << player.getIntelligence() << std::endl;
    std::cout << "-------------------------------------------" << std::endl;

    return 0;
}
