/*********************************************************************
** Program name: medusa.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the function descriptions for the member 
** functions in medusa class
*********************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>
#include"medusa.hpp"

/*********************************************************************
** Description: Default constructor for medusa class, sets armor and 
** strength points to numbers specified in assignment
** Input: none
** Output: none
*********************************************************************/
Medusa::Medusa()
{
	armor = 3; //specified in instructions
	strengthPts = 8; //specifed in instructions
	name = "Medusa";
}

/*********************************************************************
** Description: attack function, simulates roll for number of die
** specified in assignment, medusa uses glare by rolling a 12 
** Input: none
** Output: integer representing roll
*********************************************************************/
int Medusa::getAttack()
{
	//2 die 6 sides
	//special skill *glare = if medusa rolls a twelve she wins
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	if (roll1 + roll2 == 12)
	{
		std::cout << "Medusa used Charm to win" << std::endl;
		return 999999; //medusa wins by return number so large
	}
	else
	{
		return roll1 + roll2;
	}
}

/*********************************************************************
** Description: defense function, simulates roll for number of die
** specified in assignment
** Input: none
** Output: integer representing roll
*********************************************************************/
int Medusa::getDefense()
{
	//1 die with 6 sides
	return rand() % 6 + 1;
}

/*********************************************************************
** Description: returns the value for armor for medusa
** Input: none
** Output: integer represnting armor
*********************************************************************/
int Medusa::getArmor()
{
	return armor;
}

/*********************************************************************
** Description: returns strength points for medusa
** Input: none
** Output: integer represting stregnth points
*********************************************************************/
int Medusa::getStrength()
{
	return strengthPts;
}

/*********************************************************************
** Description: sets the strength points to the parameter integer
** Input: integer represnting new strength
** Output: none
*********************************************************************/
void Medusa::setStrength(int strengthIn)
{
	strengthPts = strengthIn;
}
