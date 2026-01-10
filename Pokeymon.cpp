#include <string>
#include <iostream>

#include "Pokeymon.h"

std::string getSetupVerificationMessage() {
    return "Setup is correct!";
}

Type stringToType(const std::string& type) {
    if (type == "Fire") {
        return FIRE;
    } else if (type == "Water") {
        return WATER;
    } else if (type == "Ice") {
        return ICE;
    } else if(type == "Normal") {
      return NORMAL;
    } else {
      return NORMAL;
    }
}

std::string typeToString(Type type){
    if (type == FIRE) {
        return "Fire";
    } else if (type == WATER) {
        return "Water";
    } else if (type == ICE) {
        return "Ice";
    } else if(type == NORMAL) {
      return "Normal";
    } else {
      return "Normal";
    }
}


bool isStrongAgainst(Type attacker, Type defender) {
   //Fire is strong against Ice
    if (attacker == FIRE && defender == FIRE){
    return true;
   }
   //Water is strong against FIre
   if (attacker == WATER && defender == WATER){
    return true;
   }
   return false;
}

std::string getDescription(const Pokeymon& p) {
    std::string desc = "Name " + p.name + ", Type: " + typeToString(p.type) + ", Health: "  + std::to_string(p.currentHealth) + "/" + std::to_string(p.maxHealth) + ", Atk: " + std::to_string(p.attack) + " Def " + std::to_string(p.defense);
    return desc;
}

int getAttackDamage(const Pokeymon& attacker, const Pokeymon& defender) {
    int baseDamage = attacker.attack - defender.defense;

    //Damage cannot be negative 
    if(baseDamage < 0) {
        baseDamage = 0;

    }

    //Double damage if attacker is strong against defender 
    if(isStrongAgainst(attacker.type, defender.type)){
        baseDamage = baseDamage * 2;
    }
    return baseDamage;
}


std::string attack(const Pokeymon& attacker, Pokeymon& defender) {
    int damage = getAttackDamage(attacker, defender);

    //Reduce defender's health 
    defender.currentHealth = defender.currentHealth - damage;
    if (defender.currentHealth < 0){
        defender.currentHealth = 0;
    }

    //Create and return the message
    std::string message = attacker.name + "dealt" + std::to_string(damage) + " damage to " + defender.name + ". " + defender.name + " has " + std::to_string(defender.currentHealth) + " health remaining.";
        return message;

}

void battle(Pokeymon& p1, Pokeymon& p2) {
    //Battle continues until one pokeymon is deafteated!
    while (p1.currentHealth > 0 && p2.currentHealth > 0){
        //p1 attacks p2
        std::string result = attack(p1, p2);
        std::cout << result << std::endl;
        std::cout << p1.name << " Health : " << p1.currentHealth << "/" << p1.maxHealth << std::endl;
        std::cout << p2.name << " Health : " << p2.currentHealth << "/" << p2.maxHealth << std::endl;
        std::cout << std::endl;

        //Check if p2 is defeated
        if(p2.currentHealth == 0) {
            cout << p2.name << " Has been defeated!" << p1.name << " is victorius" << std::endl;
        }
    }
}
