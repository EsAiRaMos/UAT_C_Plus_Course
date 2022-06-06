#pragma once
#include <string>

class Character_class{

public:

    void Name(std::string Name);


    //here I have a function protoytype of the talk function

    void talk(std::string stufftosay);

    void talk(std::string name, std::string stufftosay);

    //A public method int called Gethealth

    int GetHealth();

    //A public method void used to set health

    void SetHealth(int Health);

    //this is a virtual attack method that induces 10 hit points

    virtual int Attack();

    //the help method is overidden and empty

    void Help(std::string title);

    void Help(std::string text, int number);


private:

   //An int private health method
   
   //this encapsulates the int

    int Health;

};


