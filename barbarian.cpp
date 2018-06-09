/*********************************************************************
** Program name: barbarian.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the function descriptions for the member 
** functions in barbarian class
*********************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>
#include"barbarian.hpp"

/*********************************************************************
** Description: Defualt constructor for barbarian class that sets the
** armor and strength points to the numbers specified in assignment
** Input: none
** Output: none
*********************************************************************/
Barbarian::Barbarian()
{
	armor = 0; //specified in instructions
	strengthPts = 12; //specifed in instructions
	name = "Barbarian";
}

/*********************************************************************
** Description: attack function, rolls the number of die specified in 
** the assignment by using the rand() function
** Input: none
** Output: integer representing roll of dies
*********************************************************************/
int Barbarian::getAttack()
{
	//2 die 6 sides
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	return roll1 + roll2;
}

/*********************************************************************
** Description: Defense function, rolls the number of die specified in
** the assignment by using the rand() function
** Input: none
** Output: integer of the sum of all the rolls
*********************************************************************/
int Barbarian::getDefense()
{
	//2 die with 6 sides
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	return roll1 + roll2;
}

/*********************************************************************
** Description: returns the value for armor for barbarian
** Input: none
** Output: integer represnting armor
*********************************************************************/
int Barbarian::getArmor()
{
	return armor;
}

/*********************************************************************
** Description: returns strength points for barbarian
** Input: none
** Output: integer represting stregnth points
*********************************************************************/
int Barbarian::getStrength()
{
	return strengthPts;
}

/*********************************************************************
** Description: sets the strength points to the parameter integer
** Input: integer represnting new strength
** Output: none
*********************************************************************/
void Barbarian::setStrength(int strengthIn)
{
	strengthPts = strengthIn;
}
