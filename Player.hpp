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

    std::string getRace() const {
        return Race;
    }

    void setRace(Races newRace) {
        Race = enumToString(newRace);
        switch (newRace) {
            case Human:
                health = 100.0;
                healthMax = 100.0;
                mana = 50.0;
                manaMax = 50.0;
                stamina = 75.0;
                staminaMax = 75.0;
                defensePhy = 10.0;
                defenseMag = 10.0;
                strength = 15.0;
                resistance = 15.0;
                faith = 20.0;
                magic = 12.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Orc:
                health = 120.0;
                healthMax = 120.0;
                mana = 20.0;
                manaMax = 20.0;
                stamina = 100.0;
                staminaMax = 100.0;
                defensePhy = 15.0;
                defenseMag = 15.0;
                strength = 25.0;
                resistance = 10.0;
                faith = 5.0;
                magic = 5.0;
                intelligence = 5.0;
                dexterity = 10.0;
                break;
            case Reptile:
                health = 90.0;
                healthMax = 90.0;
                mana = 30.0;
                manaMax = 30.0;
                stamina = 80.0;
                staminaMax = 80.0;
                defensePhy = 12.0;
                defenseMag = 8.0;
                strength = 18.0;
                resistance = 12.0;
                faith = 10.0;
                magic = 15.0;
                intelligence = 15.0;
                dexterity = 14.0;
                break;
            case Fairy:
                health = 70.0;
                healthMax = 70.0;
                mana = 60.0;
                manaMax = 60.0;
                stamina = 60.0;
                staminaMax = 60.0;
                defensePhy = 8.0;
                defenseMag = 15.0;
                strength = 8.0;
                resistance = 10.0;
                faith = 25.0;
                magic = 25.0;
                intelligence = 20.0;
                dexterity = 18.0;
                break;
            case Elf:
                health = 80.0;
                healthMax = 80.0;
                mana = 40.0;
                manaMax = 40.0;
                stamina = 70.0;
                staminaMax = 70.0;
                defensePhy = 10.0;
                defenseMag = 11.0;
                strength = 12.0;
                resistance = 15.0;
                faith = 15.0;
                magic = 20.0;
                intelligence = 22.0;
                dexterity = 16.0;
                break;
            case Dwarf:
                health = 110.0;
                healthMax = 120.0;
                mana = 20.0;
                manaMax = 20.0;
                stamina = 90.0;
                staminaMax = 90.0;
                defensePhy = 15.0;
                defenseMag = 8.0;
                strength = 20.0;
                resistance = 20.0;
                faith = 10.0;
                magic = 5.0;
                intelligence = 10.0;
                dexterity = 12.0;
                break;
            case Goblin:
                health = 75.0;
                healthMax = 75.0;
                mana = 25.0;
                manaMax = 25.0;
                stamina = 100.0;
                staminaMax = 100.0;
                defensePhy = 10.0;
                defenseMag = 10.0;
                strength = 15.0;
                resistance = 12.0;
                faith = 8.0;
                magic = 8.0;
                intelligence = 12.0;
                dexterity = 20.0;
                break;
            case Vampire:
                health = 140.0;
                healthMax = 140.0;
                mana = 70.0;
                manaMax = 70.0;
                stamina = 95.0;
                staminaMax = 95.0;
                defensePhy = 20.0;
                defenseMag = 15.0;
                strength = 28.0;
                resistance = 0.0;
                faith = 0.0;
                magic = 25.0;
                intelligence = 25.0;
                dexterity = 17.0;
                break;
            case Werewolf:
                health = 100.0;
                healthMax = 100.0;
                mana = 20.0;
                manaMax = 20.0;
                stamina = 110.0;
                staminaMax = 110.0;
                defensePhy = 18.0;
                defenseMag = 5.0;
                strength = 25.0;
                resistance = 15.0;
                faith = 5.0;
                magic = 5.0;
                intelligence = 10.0;
                dexterity = 15.0;
                break;
            case Karen:
                health = 65.0;
                healthMax = 65.0;
                mana = 10.0;
                manaMax = 10.0;
                stamina = 200.0;
                staminaMax = 200.0;
                defensePhy = 16.0;
                defenseMag = 16.0;
                strength = 20.0;
                resistance = 20.0;
                faith = 18.0;
                magic = 10.0;
                intelligence = 5.0;
                dexterity = 20.0;
                break;
        }
    }

    std::string getClass() const {
        return Class;
    }

    void setClass(Classes newClass) {
        Class = enumToStringC(newClass);
        switch (newClass) {
            case Thief:
                defensePhy += 10.0;
                defenseMag += 5.0;
                strength += 15.0;
                faith += 10.0;
                magic += 12.0;
                intelligence += 15.0;
                dexterity += 18.0;
                break;
            case Wizard:
                defensePhy += 5.0;
                defenseMag += 10.0;
                strength += 8.0;
                faith += 10.0;
                magic += 18.0;
                intelligence += 20.0;
                dexterity += 15.0;
                break;
            case Paladin:
                defensePhy += 15.0;
                defenseMag += 5.0;
                strength += 20.0;
                faith += 18.0;
                magic += 8.0;
                intelligence += 12.0;
                dexterity += 12.0;
                break;
            case Knight:
                defensePhy += 18.0;
                defenseMag += 8.0;
                strength += 20.0;
                faith += 12.0;
                magic += 8.0;
                intelligence += 12.0;
                dexterity += 15.0;
                break;
            case Barbarian:
                defensePhy += 15.0;
                defenseMag += 5.0;
                strength += 22.0;
                faith += 8.0;
                magic += 5.0;
                intelligence += 10.0;
                dexterity += 15.0;
                break;
            case Priest:
                defensePhy += 5.0;
                defenseMag += 15.0;
                strength += 8.0;
                faith += 20.0;
                magic += 15.0;
                intelligence += 10.0;
                dexterity += 12.0;
                break;
            case Ranger:
                defensePhy += 8.0;
                defenseMag += 8.0;
                strength += 15.0;
                faith += 10.0;
                magic += 10.0;
                intelligence += 18.0;
                dexterity += 20.0;
                break;
            case Bard:
                defensePhy += 10.0;
                defenseMag += 10.0;
                strength += 12.0;
                faith += 15.0;
                magic += 15.0;
                intelligence += 15.0;
                dexterity += 18.0;
                break;
        }
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
            default: return "Unknown";
        }
    }

    template <typename T>
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