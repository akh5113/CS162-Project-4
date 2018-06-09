/*********************************************************************
** Program name: harrypotter.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Harry Potter class uses polymorphism to inheriant from the
** creature class, conatins the public member function prototypes.
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

class HarryPotter : public Creature
{
private:
	int dieCount; 
public:
	HarryPotter();
	int getAttack();
	int getDefense();
	int getArmor();
	int getStrength();
	void setStrength(int);
};

#endif 

