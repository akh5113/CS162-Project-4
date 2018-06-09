/*********************************************************************
** Program name: bluemen.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Blue Men class uses polymorphism to inheriant from the
** creature class, conatins the public member function prototypes.
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

class BlueMen : public Creature
{
public:
	BlueMen();
	int getAttack();
	int getDefense();
	int getArmor();
	int getStrength();
	void setStrength(int);
};

#endif 
