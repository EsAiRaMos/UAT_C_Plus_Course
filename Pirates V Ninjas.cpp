// Pirates V Ninjas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Character.h"
#include "Ninja.h"
#include "Pirate.h"

using namespace std;

//this is a class for the introduction of the game

class Class {

public:

    //a member fucntion for the intro

   void coolintro();


};

//here I'm defining the member function outside of the class definition 

void Class::coolintro() {

    cout << "              !!!---------------------PIRATES V NINJAS----------------------!!!\n\n";

}
 

int main()
{
    //here i have multiple instances of various classes

    //instance of the class class

    Class Intro;
    
    cout << "\n       WELCOME USER TO... \n\n";
    
    //here I'm calling the intro data function within the class class

    Intro.coolintro();

    

    //--------------------------------------NINJA CHARACTER-------------------------------------------//

    //instance of the Ninja class

    Ninja ninja;

    //a simple speech function for dialogue

    //this is a simple name fucntion 

    ninja.Name("\n\n               ******* BARBS THE NINJA HAS APPEARED *******\n\n");

    //setting the health with a public void method in the character class

    ninja.SetHealth(100);

    //another talk function printing the health from the private within the character class

    ninja.talk("\n\n                *-- Her health is currently " + std::to_string(ninja.GetHealth()));

    //these talk methods prints preset text along inputted text 

    ninja.talk("\n\n                Hello there.");

    ninja.talk("\n\n                Barbs", "I am a ninja and I'm here to FIGHT a pesky Pirate named Dan!!! \n\n");

    //here I'm calling the throwstars data function 

    ninja.ThrowStars();

    //damage function

    int pain = ninja.Attack();

    cout << "\n\n                Damage: " << pain << "\n";

    ninja.help();

    //an overriden help method

    ninja.Help("                Barbs");

    ninja.Help("                I will hurt you very bad Pirate!!", 5);
 
    ninja.talk("\n\n                Oh I have been hit\n\n");

    ninja.SetHealth(-1);


    cout << "\n\n               *---------------------------------------------------------------------------------------*\n\n";

    Pirate pirate;

    //here is an instance of the pirate class with the number of sword swings givent the value of 3

    //----------------------------------PIRATE CHARACTER----------------------------------------------//

    pirate.Name("\n                ******* DAN THE PIRATE HAS APPEARED *******\n\n");

    //setting the health with a public void method in the character class

    pirate.SetHealth(100);

    //another talk function printing the health from the private within the character class

    pirate.talk("\n\n                *-- His health is currently " + std::to_string(pirate.GetHealth()));
   
    //through inheritence I'm calling the name data function in character class

    //these two talk methods have similiar functions but the second has a preset text

    pirate.talk("\n\n                Welcome.");

    pirate.talk("\n\n                Dan", "Greetings Ninja Barb, I see you want to FIGHT!!");
  
    //attacks ninja

    int damage = pirate.Attack();

    cout << "\n\n                Damage: " << damage << "\n";

    //here I have the use sword data function 

    pirate.UseSword();

  

    return 0;

}


