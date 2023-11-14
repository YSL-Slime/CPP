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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Orc:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;;
                break;
            case Reptile:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Fairy:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Elf:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Dwarf:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Goblin:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Vampire:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Werewolf:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
            case Karen:
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
                magic = 20.0;
                intelligence = 20.0;
                dexterity = 15.0;
                break;
        }
    }

    std::string getClass() const {
        return Class;
    }

    void setClass(Classes newClass) {
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