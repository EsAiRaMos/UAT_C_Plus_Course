
#include <iostream>
#include "Ninja.h"

//NINJA CHARACTER

//here the constructor for the Ninja class is defined to print text and number of stars for m_stars

Ninja::Ninja(int Stars) 
{

    m_stars = Stars;
}

//attack method definition

int Ninja::Attack()
{
   //returns attack damage of 25

    return 25;

};

//a class holding data members and member function and one constructor


void Ninja::ThrowStars() {

    std::cout << "\n\n                I have thrown stars!!\n\n";

    std::cout << "                I have thrown " << m_stars << " ninja stars!!\n\n";

};