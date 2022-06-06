#pragma once
#include "Character.h"
#include "GameStructure.h"

class Ninja: public Character_class, public GameStructure {

public:

    //a data member for the number throwing stars

    int m_stars;

    int Attack() override;

    //a data function defined within the class printing text and the number of stars

    void ThrowStars();

    //a constructor being declared within the class

    Ninja(int Stars = 3);

};

