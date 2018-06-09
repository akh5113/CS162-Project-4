/*********************************************************************
** Program name: menu.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description:
*********************************************************************/

#include<iostream>
#include"menu.hpp"

/*********************************************************************
** Description: Prompts the user to start the game, get a game
** description or quit the program
** Input: none
** Output: integer representing choice
*********************************************************************/
int menu1()
{
	int action;
	std::cout << "-------------- Menu --------------" << std::endl;
	std::cout << "Select an option" << std::endl;
	std::cout << "1. Team 1 pick your creatures" << std::endl;
	std::cout << "2. Team 2 pick your creatures" << std::endl;
	std::cout << "3. Start Tournament!" << std::endl;
	std::cout << "4. Quit" << std::endl;
	std::cin >> action;
	//validate integer
	bool iValid = 1;
	while (iValid == 1)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a valid integer, enter again." << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}
	//validate in range
	iValid = 1;
	while (iValid == 1)
	{
		if (action < 1 || action > 4)
		{
			std::cout << "Out of range, enter a number between " << 1 << " and " << 4 << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}

	return action;
}

/*********************************************************************
** Description: Menu that displays the 5 creatures that can fight,
** prompts user to enter a number represting that creature
** Input: none
** Output: integer represting the creature
*********************************************************************/

int menu2()
{
	int action;
	std::cout << "-------------- Menu --------------" << std::endl;
	std::cout << "Select a team member" << std::endl;
	std::cout << "1. Vampire" << std::endl;
	std::cout << "2. Barbarian" << std::endl;
	std::cout << "3. Blue Men" << std::endl;
	std::cout << "4. Medusa" << std::endl;
	std::cout << "5. Harry Potter" << std::endl;
	std::cin >> action;
	//validate integer
	bool iValid = 1;
	while (iValid == 1)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a valid integer, enter again." << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}
	//validate in range
	iValid = 1;
	while (iValid == 1)
	{
		if (action < 1 || action > 5)
		{
			std::cout << "Out of range, enter a number between " << 1 << " and " << 5 << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}

	return action;
}

/*
int menu3()
{
	int action;

	std::cout << "Do you want to battle the same teams again?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> action;
	//validate integer
	bool iValid = 1;
	while (iValid == 1)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a valid integer, enter again." << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}
	//validate in range
	iValid = 1;
	while (iValid == 1)
	{
		if (action < 1 || action > 2)
		{
			std::cout << "Out of range, enter a number between " << 1 << " and " << 2 << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}

	return action;
}
*/

/*******************************************************************************
** Description: Displays menu for loser pile
** Parameters: none
** Returns: integer representing choice
*******************************************************************************/
int menu4()
{
	int action;

	std::cout << "Do you want to see the loser pile?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;
	std::cin >> action;
	//validate integer
	bool iValid = 1;
	while (iValid == 1)
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a valid integer, enter again." << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}
	//validate in range
	iValid = 1;
	while (iValid == 1)
	{
		if (action < 1 || action > 2)
		{
			std::cout << "Out of range, enter a number between " << 1 << " and " << 2 << std::endl;
			std::cin >> action;
		}
		else
		{
			iValid = 0;
		}
	}

	return action;
}

