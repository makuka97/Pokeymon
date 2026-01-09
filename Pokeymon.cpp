#include <string>
#include <iostream>

#include "Pokeymon.h"

std::string getSetupVerificationMessage() {
    return "Setup is correct!";
}

Type StringToType(const std::string& type) {
    if (type == "fire") {
        return FIRE;
    } else if (type == "water") {
        return WATER;
    } else if (type == "Ice") {
        return ICE;
    } else if(type == "Normal") {
      

        return "Normal";
    }
}



bool isStrongAgainst(Type attacker, Type defender) {
    return false; // stub
}

std::string getDescription(const Pokeymon&) {
    return ""; // stub
}

int getAttackDamage(const Pokeymon& attacker, const Pokeymon& defender) {
    return 0; // stub
}

std::string attack(const Pokeymon& attacker, Pokeymon& defender) {
    return ""; // stub
}

void battle(Pokeymon& p1, Pokeymon& p2) {
    // stub
}
