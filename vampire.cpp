/*********************************************************************
** Program name: vampire.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the function descriptions for the member 
** functions in vampire class
*********************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>
#include"vampire.hpp"

/*********************************************************************
** Description: Default constructor for vampire class, sets armor to 
** specified numbers in the assignment instructions
** Input: none
** Output: none
*********************************************************************/
Vampire::Vampire()
{
	armor = 1; //specified in instructions
	strengthPts = 18; //specifed in instructions
	name = "Vampire";
}

/*********************************************************************
** Description: Attack function, rolls number of dies specified in the
** assignment to get a random number 
** Input: none
** Output: integer represnting a random roll
*********************************************************************/
int Vampire::getAttack()
{
	//1 die with 12 sides
	return rand() % 12 + 1;
}

/*********************************************************************
** Description: Defense function, rolls number of dies specified in the 
** assingment to get a random number
** Input: none
** Output: integer represnting a random roll
*********************************************************************/
int Vampire::getDefense()
{
	//1 die with 6 sides
	return rand() % 6 + 1;
}

/*********************************************************************
** Description: returns the value of armor for vampire
** Input: none
** Output: integer represting armor
*********************************************************************/
int Vampire::getArmor()
{
	return armor;
}

/*********************************************************************
** Description: returns the value of strength poitns for vampire
** Input: none
** Output: integer represnting strength points
*********************************************************************/
int Vampire::getStrength()
{
	return strengthPts;
}

/*********************************************************************
** Description: Sets the strength for vampire, uses his special skill
** Input: integer represting what the strength should be
** Output: none
*********************************************************************/
void Vampire::setStrength(int strengthIn)
{
	//special skill *Charm = 50% of the time the opponet doesnt attack
	//using random number generator to set even numbers as times that
	//attack doesn't work, thus strength pts will stay the same
	int randNum = rand() % 50 + 1;
	if (randNum % 2 == 0) //charm if random number is even
	{
		std::cout << "Vampire using charm, no attack recieved" << std::endl;
		strengthPts = strengthPts; //no effect
	}
	else // no charm
	{
		strengthPts = strengthIn;
	}
}
