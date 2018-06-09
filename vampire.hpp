/*********************************************************************
** Program name: vampire.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Vampire class uses polymorphism to inheriant from the
** creature class, conatins the public member function prototypes.
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

class Vampire : public Creature
{
public:
	Vampire();
	int getAttack();
	int getDefense();
	int getArmor();
	int getStrength();
	void setStrength(int);
};

#endif 