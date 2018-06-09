/*********************************************************************
** Program name: barbarian.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Barbarian class uses polymorphism to inheriant from the
** creature class, conatins the public member function prototypes.
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

class Barbarian : public Creature
{
public:
	Barbarian();
	int getAttack();
	int getDefense();
	int getArmor();
	int getStrength();
	void setStrength(int);
};

#endif 
