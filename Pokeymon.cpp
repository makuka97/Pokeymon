#include <iostream>
using namespace std;

// Include your function declarations and struct/enum definitions
#include "Pokeymon.h"


// Define functions here based on the declarations in Pokeymon.h

string getSetupVerificationMessage() {
    return "Setup is correct!";
}

string typeToString(Type type){
  if (type == Type::FIRE){
    return "Fire";
  } else if (type == Type::WATER){
    return "Water";
  } else if (type == Type::ICE){
    return "Ice";
  } else{
    return "NORDMAL";

  }
}

Type stringToType(const std::string& type){
 //stub it
  return Type::NORMAL;

}

bool isStrongAgainst(Type attacker, Type defender){
  //stubin it up
  return false;
}

//pokeymon helper functions
//
//

std::string getDescription(const Pokeymon&){
  //stub
  return "";
}

int getAttackDamage(const Pokeymon& attack, const Pokeymon& defender){
  //stuuubbb
  return 0;
}  

std::string attack(const Pokeymon& attack, Pokeymon& defender){
  //stubalicioius
  return "";
}

void battle (Pokeymon& p1, Pokeymon& p2){
  //stub
}
