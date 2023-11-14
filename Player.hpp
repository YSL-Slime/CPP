#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

enum Races { Orc, Human, Reptile, Fairy, Elf, Dwarf, Goblin, Vampire, Werewolf, Karen };
enum Classes { Thief, Wizard, Paladin, Knight, Barbarian, Priest, Ranger, Bard };

class Player {
private:
    std::string Race;
    std::string Class;
    int age;
    int level;
    double health;
    double healthMax;
    double mana;
    double manaMax;
    double stamina;
    double staminaMax;
    double defensePhy;
    double defenseMag;
    double strength;
    double resistance;
    double faith;
    double magic;
    double intelligence;
    double dexterity;

public:
    std::string name;

    // Getters and Setters
    std::string getRace() const {
        return Race;
    }

    void setRace(Races newRace) {
        // Convert enum to string or handle it as needed
        // For simplicity, converting it to a string here
        Race = enumToString(newRace);
    }

    std::string getClass() const {
        return Class;
    }

    void setClass(Classes newClass) {
        // Convert enum to string or handle it as needed
        // For simplicity, converting it to a string here
        Class = enumToStringC(newClass);
    }

        int getAge() const {
            return age;
        }

        int getLevel() const {
            return level;
        }

        double getHealth() const {
            return health;
        }

        double getHealthMax() const {
            return healthMax;
        }

        double getMana() const {
            return mana;
        }

        double getManaMax() const {
            return manaMax;
        }

        double getStamina() const {
            return stamina;
        }

        double getStaminaMax() const {
            return staminaMax;
        }

        double getDefensePhy() const {
            return defensePhy;
        }

        double getDefenseMag() const {
            return defenseMag;
        }

        double getStrength() const {
            return strength;
        }

        double getResistance() const {
            return resistance;
        }

        double getFaith() const {
            return faith;
        }

        double getMagic() const {
            return magic;
        }

        double getIntelligence() const {
            return intelligence;
        }

        double getDexterity() const {
            return dexterity;
        }

        void setAge(int newAge) {
            age = newAge;
        }

        void setLevel(int newLevel) {
            level = newLevel;
        }

        void setHealth(double newHealth) {
            health = newHealth;
        }

        void setHealthMax(double newHealthMax) {
            healthMax = newHealthMax;
        }

        void setMana(double newMana) {
            mana = newMana;
        }

        void setManaMax(double newManaMax) {
            manaMax = newManaMax;
        }

        void setStamina(double newStamina) {
            stamina = newStamina;
        }

        void setStaminaMax(double newStaminaMax) {
            staminaMax = newStaminaMax;
        }

        void setDefensePhy(double newDefensePhy) {
            defensePhy = newDefensePhy;
        }

        void setDefenseMag(double newDefenseMag) {
            defenseMag = newDefenseMag;
        }

        void setStrength(double newStrength) {
            strength = newStrength;
        }

        void setResistance(double newResistance) {
            resistance = newResistance;
        }

        void setFaith(double newFaith) {
            faith = newFaith;
        }

        void setMagic(double newMagic) {
            magic = newMagic;
        }

        void setIntelligence(double newIntelligence) {
            intelligence = newIntelligence;
        }

        void setDexterity(double newDexterity) {
            dexterity = newDexterity;
        }

    private:
    // Helper function to convert enum to string
    template <typename T>
    std::string enumToString(T enumValue) const {
        switch (enumValue) {
            case Orc: return "Orc";
            case Human: return "Human";
            case Reptile: return "Reptile";
            case Fairy: return "Fairy";
            case Elf: return "Elf";
            case Dwarf: return "Dwarf";
            case Goblin: return "Goblin";
            case Vampire: return "Vampire";
            case Werewolf: return "Werewolf";
            case Karen: return "Karen";
        }
    }
    std::string enumToStringC(T enumValue) const {
        switch (enumValue) {
            case Thief: return "Thief";
            case Wizard: return "Wizard";
            case Paladin: return "Paladin";
            case Knight: return "Knight";
            case Barbarian: return "Barbarian";
            case Priest: return "Priest";
            case Ranger: return "Ranger";
            case Bard: return "Bard";
            default: return "Unknown";
        }
    }
};