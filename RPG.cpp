#include <iostream>
#include <ctime>
#include <cmath>
#include "Player.hpp"
#include <windows.h>


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

    std::cout << "Choose a race:" << std::endl;
    for (int i = Orc; i <= Karen; ++i) {
        std::cout << i+1 << ". " << player.enumToString(static_cast<Races>(i)) << std::endl;
    }
    int raceChoice = getUserInput("Enter the number corresponding to the race: ", Orc, Karen);
    player.setRace(static_cast<Races>(raceChoice));

    std::cout << "Choose a class:" << std::endl;
    for (int i = Thief; i <= Bard; ++i) {
        std::cout << i+1 << ". " << player.enumToStringC(static_cast<Classes>(i)) << std::endl;
    }
    int classChoice = getUserInput("Enter the number corresponding to the class: ", Thief, Bard);
    player.setClass(static_cast<Classes>(classChoice));

    player.display();


    Sleep(5000);
    std::cout << "                       A long time ago                        " << std::endl;
    Sleep(2500);
    std::cout << std::endl;
    std::cout << "          Lumos, a world ablaze with radiant magic,           " << std::endl; 
    std::cout << "          found itself on an unavoidable collision            " << std::endl; 
    std::cout << "                  course with another realm                   " << std::endl;
    Sleep(5500);
    std::cout << std::endl;
    std::cout << "                           Chronos                            " << std::endl;
    std::cout << std::endl;
    Sleep(2000);
    std::cout << "          A dark world, where only the ebb and flow           " << std::endl;
    std::cout << "           of time shaped every facet of existance.           " << std::endl;
    Sleep(3500);
    std::cout << std::endl;
    std::cout << "             The impending convergence threatened             " << std::endl; 
    std::cout << "         the very fabric of existence for both worlds,        " << std::endl; 
    std::cout << "          casting a shadow of impending doom across           " << std::endl; 
    std::cout << "                    the cosmic tapestry.                      " << std::endl;
    Sleep(4000);

    return 0;
}
