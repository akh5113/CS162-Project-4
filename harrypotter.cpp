/*********************************************************************
** Program name: harrypotter.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the function descriptions for the member 
** functions in Harry Potter class
*********************************************************************/

#include<iostream>
#include<cstdlib>
#include<string>
#include"harrypotter.hpp"

/*********************************************************************
** Description: Defualt constructor for Harry Potter class, set the 
** armor and stregnth points to integers specified in assingment
** Input: none
** Output: none
*********************************************************************/
HarryPotter::HarryPotter()
{
	armor = 0; //specified in instructions
	strengthPts = 10; //specifed in instructions
	name = "Harry Potter";
	dieCount = 0;
}

/*********************************************************************
** Description: attack function, simulates roll for number of die
** specified in assignment
** Input: none
** Outpout: integer representing die rolls
*********************************************************************/
int HarryPotter::getAttack()
{
	//2 die 6 sides
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	return roll1 + roll2;
}

/*********************************************************************
** Description: defense function, simulates roll for number of die
** specified in assignment
** Input: none
** Output: integer representing die rolls
*********************************************************************/
int HarryPotter::getDefense()
{
	//2 die 6 sides
	int roll1, roll2;
	roll1 = rand() % 6 + 1;
	roll2 = rand() % 6 + 1;
	return roll1 + roll2;
}

/*********************************************************************
** Description: returns the value for armor for Harry Potter
** Input: none
** Output: integer represnting armor
*********************************************************************/
int HarryPotter::getArmor()
{
	return armor;
}

/*********************************************************************
** Description: returns strength points for harry potter
** Input: none
** Output: integer represting stregnth points
*********************************************************************/
int HarryPotter::getStrength()
{
	return strengthPts;
}

/*********************************************************************
** Description: sets the strength points to the parameter integer
** Input: integer represnting new strength, harry potter regains 20
** strength points if he has died once
** Output: none
*********************************************************************/
void HarryPotter::setStrength(int strengthIn)
{
	//special skill *Hogwarts = if harry dies his strength recovers to
	//20, only for first death
	if (strengthIn <= 0 && dieCount == 0)
	{
		std::cout << "Harry Potter used Hogwarts and regenerates" << std::endl;
		strengthPts = 20;
		dieCount++;
	}
	else
	{
		strengthPts = strengthIn;
	}
}