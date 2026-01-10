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

    //Double damage if attacker 
}

std::string attack(const Pokeymon& attacker, Pokeymon& defender) {
    return ""; // stub
}

void battle(Pokeymon& p1, Pokeymon& p2) {
    // stub
}
