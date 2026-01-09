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
    return Type::NORMAL;

  }
}
  
