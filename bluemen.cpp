/*********************************************************************
** Program name: bluemen.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the function descriptions for the member 
** functions in blue men class
*********************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>
#include"bluemen.hpp"

/*********************************************************************
** Description: Default constructor for Blue Men class sets armor and
** strength points to values specified in assingment
** Input: none
** Output: none
*********************************************************************/
BlueMen::BlueMen()
{
	armor = 3; //specified in instructions
	strengthPts = 12; //specifed in instructions
	name = "Blue Men";
}

/*********************************************************************
** Description: simulates the die rolling of the number of die specified
** in the assingment
** Input: none
** Output: integer represnting rolls of die
*********************************************************************/
int BlueMen::getAttack()
{
	//2 die 10 sides
	int roll1, roll2;
	roll1 = rand() % 10 + 1;
	roll2 = rand() % 10 + 1;
	return roll1 + roll2;
}

/*********************************************************************
** Description: defnese function, simulates the die rolling of the number
** of die specified in the assingment, mob causes a loss of 1 die
** for each 4 pts of strength points lost
** Input: none
** Output: integer represnting rolls of die
*********************************************************************/
int BlueMen::getDefense()
{
	//3 die with 6 sides
	//special skill *mob = 4 pts of damage they lose 1 defense die
	int roll1, roll2, roll3;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	roll3 = rand() % 6 + 1;
	if (strengthPts <= 8 && strengthPts > 4)
	{
		std::cout << "Mob - Down one defense die" << std::endl;
		return roll1 + roll2;
	}
	else if (strengthPts <= 4)
	{
		std::cout << "Mob - Down two defensive die" << std::endl;
		return roll1;
	}
	else
	{
		return roll1 + roll2 + roll3;
	}
}

/*********************************************************************
** Description: returns the value for armor for blue men
** Input: none
** Output: integer represnting armor
*********************************************************************/
int BlueMen::getArmor()
{
	return armor;
}

/*********************************************************************
** Description: returns strength points for blue men
** Input: none
** Output: integer represting stregnth points
*********************************************************************/
int BlueMen::getStrength()
{
	return strengthPts;
}

/*********************************************************************
** Description: sets the strength points to the parameter integer
** Input: integer represnting new strength
** Output: none
*********************************************************************/
void BlueMen::setStrength(int strengthIn)
{
	strengthPts = strengthIn;
}
