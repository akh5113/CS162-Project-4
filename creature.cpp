/*********************************************************************
** Program name: creature.cpp
** Author: Anne Harris
** Date: May 1, 2017
** Description: contains the function definition for the creature class
** since all functions are virutal it only has a default constructor
*********************************************************************/

#include<iostream>
#include<string>
#include"creature.hpp"

/*********************************************************************
** Description: Default constructor to set the armor to 1 and the 
** strength poitns to 1
** Input: none
** Output: none
*********************************************************************/
Creature::Creature()
{
	armor = 1;
	strengthPts = 1;
	name = "Creature";
}

/*********************************************************************
** Description: sets the name to the user entered string
** Input: string representing name
** Output: none
*********************************************************************/
void Creature::setName(std::string nameIn)
{
	name = nameIn;
}

/*********************************************************************
** Description: returns the string representing the name of the 
** Creature
** Input: none
** Output: string
*********************************************************************/
std::string Creature::getName()
{
	return name;
}

/********************************************************************
** Description: destructor
** Input: none
** Returns: none
********************************************************************/
Creature::~Creature()
{

}
