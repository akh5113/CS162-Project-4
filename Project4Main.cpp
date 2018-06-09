/*********************************************************************
** Program name: Project3Main.cpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: The main function for the program calls the menu to
** prompts the user with what to do. It is responsible for filling 
** the two teams and starting the tournament
*********************************************************************/

#include<iostream>
#include"menu.hpp"
#include"tournament.hpp"
#include"creature.hpp"

int main()
{
	//delcare tournament
	Tournament tourny;
	std::cout << "Welcome to the creature tournament!" << std::endl;
	int size;
	std::cout << "Enter how many creatures you'd like on each team" << std::endl;

	std::cin >> size;
	//validate integer
	bool iValid = 1;
	while(iValid == 1)
	{
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Not a valid integer, enter again." << std::endl;
			std::cin >> size;
		}
		else
		{
			iValid = 0;
		}
	}
	//validate in range
	iValid = 1;
	while(iValid ==1)
	{
		if(size<1 || size >25)
		{
			std::cout << "Out of range, enter a number between 1 and 25" << std::endl;
			std::cin >> size;
		}
		else
		{
			iValid = 0;
		}
	}
	//choice for menu
	int choice = menu1();

	do
	{
		//team 1 picks characters
		if (choice == 1)
		{
			tourny.fillTeam(1, size);
			tourny.printTeams(1);
			//call menu
			choice = menu1();
		}
		//team 2 picks characters
		else if (choice == 2)
		{
			tourny.fillTeam(2, size);
			tourny.printTeams(2);
			//call menu
			choice = menu1();
		}
		//start battle
		else if (choice == 3)
		{
			//check for empty lists
			if (tourny.isEmpty(1) || tourny.isEmpty(2))
			{
				if (tourny.isEmpty(1))
				{
					std::cout << "Team 1 is empty" << std::endl;
					std::cout << "Fill team 1 before starting tournament" << std::endl;
				}
				else
				{
					std::cout << "Team 2 is empty" << std::endl;
					std::cout << "Fill team 2 before starting tournament" << std::endl;
				}
				choice = menu1();
			}
			else
			{
				//start battle
				tourny.startBattle();
			}

			//prompt to play again
			choice = menu1();

		}

	} while (choice != 4);// quit

	//quit
	if (choice == 4)
	{
		return 0;
	}

	return 0;
}
