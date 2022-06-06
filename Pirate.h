#pragma once
#include "Character.h"

class Pirate: public Character_class {

public:

    //a data member for the number of sword swings

    int m_swordSwing;

    //here is a constructor holding the number of swordswings wainting for it's value

    Pirate(int swordswings = 3);

    //data function which prints text and the data member

    void UseSword();

};




