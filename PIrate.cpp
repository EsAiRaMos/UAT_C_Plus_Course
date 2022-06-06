
#include <iostream>
#include "Pirate.h"

//PIRATE CHARACTER

//here is the pirate class which inherits the character_class

void Pirate::UseSword() {

    std::cout << "\n\n                I have swung my sword!\n\n";

    std::cout << "                I have swooshed my sword " << m_swordSwing << " times!!\n\n";

}

//this is a constructor definition printing text and allowing whatever value I place in the instance within the main() to be printed

Pirate::Pirate(int swordswings) {

    m_swordSwing = swordswings;

}

