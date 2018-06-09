/*********************************************************************
** Program name: creature.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: This defines an abstract class for creature, contains
** the private function memeber variables and the pubilc virutal 
** function prototypes
*********************************************************************/

#include<iostream>
#include<string>

#ifndef CREATURE_HPP
#define CREATURE_HPP

class Creature
{
protected:
	int attack;
	int defense;
	int armor;
	int strengthPts;
	std::string name;
public:
	Creature();
	virtual int getAttack() = 0;
	virtual int getDefense() = 0;
	virtual int getArmor() = 0;
	virtual int getStrength() = 0;
	virtual void setStrength(int) = 0;
	void setName(std::string);
	std::string getName();
	~Creature();
};

#endif
