#include <string>
#include <iostream>

#include "Pokeymon.h"

std::string getSetupVerificationMessage() {
    return "Setup is correct!";
}

std::string typeToString(Type type) {
    if (type == FIRE) {
        return "Fire";
    } else if (type == WATER) {
        return "Water";
    } else if (type == ICE) {
        return "Ice";
    } else {
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
