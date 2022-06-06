#include "Character.h"
#include <iostream>
#include <string>

// a simple class holding one method


void Character_class::talk(std::string stufftosay) {

    std::cout << stufftosay;

}

//this is an improved talk method as it says who is saying it

void Character_class::talk(std::string name, std::string stufftosay) {

    std::cout << name << " says: " << stufftosay;

}

void Character_class::Name(std::string Name) {

    std::cout << Name;
}


int Character_class:: GetHealth() {

    //this returns the health

    return Health;
}

void Character_class::SetHealth(int health) {


    Health = health;

    //if healht is less 0 then prints character has expired 

    if (Health < 0) {

        std::cout << "\n\n                Health is " << Health;

        std::cout << "\n\n\n               !!!------------       Character has died...       -------------!!!\n\n\n";

    }
    else {

        //this sets the players health 

        Health = health;
    }
}


int Character_class::Attack() {

    //attack method induces 10 hit points


    return 15;

}

void Character_class::Help(std::string title){

    std::cout << "\n\n" << title << " says: They are ready to fight!! \n\n";


   
}

void Character_class::Help(std::string text, int number) {

    int Number = 0;

    Number = number;

    std::cout << "\n\n" << text << ", I am able to throw " << number << " razor stars at once!!!\n\n";

}
