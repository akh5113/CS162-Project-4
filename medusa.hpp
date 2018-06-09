/*********************************************************************
** Program name: medusa.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Medusa class uses polymorphism to inheriant from the
** creature class, conatins the public member function prototypes.
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Creature
{
public:
	Medusa();
	int getAttack();
	int getDefense();
	int getArmor();
	int getStrength();
	void setStrength(int);
};

#endif 
