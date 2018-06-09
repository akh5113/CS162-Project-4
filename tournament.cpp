/*********************************************************************
** Program name: tournament
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the member function definitions for the 
** Tournament class
*********************************************************************/

#include<iostream>
#include"tournament.hpp"
#include"menu.hpp"
#include"creature.hpp"
#include"vampire.hpp"
#include"barbarian.hpp"
#include"bluemen.hpp"
#include"medusa.hpp"
#include"harrypotter.hpp"

/*********************************************************************
** Input: none
** Output: none
** Description: Defualt constructor for the tournament class, sets 
** the points for each team to 0
*********************************************************************/
Tournament::Tournament()
{
	team1Points = 0;
	team2Points = 0;
	front1 = NULL;
	back1 = NULL;
	front2 = NULL;
	back2 = NULL;
	frontL = NULL;
	backL = NULL;
}

/*********************************************************************
** Input: integer represting the team
** Output: none
** Description: takes the team number as a parameter, then uses a loop
** to fill the team with 10 creatures. It prompts the user to enter
** their choice of creature, name it, and then creates a temporary
** creature which gets passed to add the creature to the team
*********************************************************************/
void Tournament::fillTeam(int teamIn, int size)
{
	int choice;
	std::string tempName;
	for (int i = 0; i < size; i++)
	{
		choice = menu2();
		if (choice == 1) //vampire
		{
			temp1 = new Vampire;
			//set name
			std::cout << "Enter the name for your Vampire" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, tempName);
			temp1->setName(tempName);

			//call add function
			addCreature(teamIn, temp1);
		}
		else if (choice == 2) //barbarian
		{
			temp1 = new Barbarian;

			//set name
			std::cout << "Enter the name for your Barbarian" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, tempName);
			temp1->setName(tempName);

			//call add function
			addCreature(teamIn, temp1);
		}
		else if (choice == 3) //blue men
		{
			temp1 = new BlueMen;

			//set name
			std::cout << "Enter the name for your Blue Men" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, tempName);
			temp1->setName(tempName);

			//call add funciton
			addCreature(teamIn, temp1);
		}
		else if (choice == 4) //medusa
		{
			temp1 = new Medusa;

			//set name
			std::cout << "Enter the name for your Medusa" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, tempName);
			temp1->setName(tempName);

			//call add function
			addCreature(teamIn, temp1);
		}
		else if (choice == 5) //harry potter
		{
			temp1 = new HarryPotter;

			//set name
			std::cout << "Enter the name for your Harry Potter" << std::endl;
			std::cin.ignore();
			std::getline(std::cin, tempName);
			temp1->setName(tempName);

			//call add function
			addCreature(teamIn, temp1);
		}
	}
}

/*********************************************************************
** Input: integer representing team and pointer to a creature 
** Output: none
** Description: Adds the creature from the parameter to the team from
** the parameter, also fills the loser queue the same way
*********************************************************************/
void Tournament::addCreature(int teamIn, Creature *creatIn)
{
	if (teamIn == 1) // team 1
	{
		team1 *temp = new team1(creatIn);
		if (isEmpty(teamIn))
		{
			front1 = temp;
			back1 = temp;
			front1->next1 = NULL;
			front1->previous1 = NULL;
		}
		else
		{
			back1->next1 = temp;
			temp->previous1 = back1;
			back1 = temp;
			back1->next1 = NULL;
		}
	}
	else if (teamIn == 2) // team 2
	{
		team2 *temp = new team2(creatIn);
		if (isEmpty(teamIn))
		{
			front2 = temp;
			back2 = temp;
			front2->next2 = NULL;
			front2->previous2 = NULL;
		}
		else
		{
			back2->next2 = temp;
			temp->previous2 = back2;
			back2 = temp;
			back2->next2 = NULL;
		}
	}

	if (teamIn == 3) //losers team
	{
		losers *temp = new losers(creatIn);
		if (isEmpty(teamIn))
		{
			frontL = temp;
			backL = temp;
			frontL->nextL = NULL;
			frontL->previousL = NULL;
		}
		else
		{
			backL->nextL = temp;
			temp->previousL = backL;
			backL = temp;
			backL->nextL = NULL;
		}
	}
}

/*********************************************************************
** Input: integer representing team
** Output: none
** Description: removes the front node from the team that was in 
** the parameter 
*********************************************************************/
void Tournament::removeCreature(int teamIn)
{
	if (teamIn == 1)
	{
		if(front1 == NULL)
		{
			std::cout << "Team 1 is empty" << std::endl;
		}
		else if(front1->next1 == NULL)
		{
			front1 = NULL;
			back1 = NULL;
		}
		else
		{
			team1 *temp; 
			temp = front1;
			front1 = front1->next1;
			front1->previous1 = NULL;
			delete temp;
		}
	}
	else if (teamIn == 2)
	{
		if(front2 == NULL)
		{
			std::cout << "Team 2 is empty" << std::endl;
		}
		else if(front2->next2 == NULL)
		{
			front2 = NULL;
			back2 = NULL;
		}
		else
		{
			team2 *temp;
			temp = front2;
			front2 = front2->next2;
			front2->previous2 = NULL;
			delete temp;
		}
	}
}

/*********************************************************************
** Input: integer representing the team
** Output: none
** Description: moves front node from the team struct of the parameter
** team to the back node
*********************************************************************/
void Tournament::moveCreature(int teamIn)
{
	if (teamIn == 1)
	{
		if(front1->next1 == NULL)
		{
			//nothing happens, only one creature left
			std::cout << "Last creature in team!" << std::endl;
		}
		else
		{
			team1 *temp;
			temp = front1;
			front1 = front1->next1;
			front1->previous1 = NULL;
			back1->next1 = temp;
			temp->previous1 = back1;
			back1 = temp;
			back1->next1 = NULL;
		}
	}
	else if(teamIn == 2)
	{
		if(front2->next2 == NULL)
		{
			//nothing happens, only one creature left
			std::cout << "Last creature in team!" << std::endl;
		}
		else
		{
			team2 *temp;
			temp = front2;
			front2 = front2->next2;
			front2->previous2 = NULL;
			back2->next2 = temp;
			temp->previous2 = back2;
			back2 = temp;
			back2->next2 = NULL;
		}
	}
}

/*********************************************************************
** Input: none
** Output: none
** Description: starts the battle by creating temporarty creatures to
** hold the fighters, then calls the appropriate attack and defense
** functions until the fighters strength is 0; then that fighter gets
** added to the loser struct and the winning fighter gets moved to the
** back of their struct; winner is determined by who has the most points
** and the results of the entire tournament are displayed at the end
*********************************************************************/
void Tournament::startBattle()
{
	//do/while loop to start tournament
	int tournyMatch = 1;
	//team 1 player1 vs team 2 player1
	do
	{
		//start new round
		bool endRound = false;

		//update rounds
		int rounds = 1;
		int updateStrength = 0;
		//get fighters
		fighter1 = front1->teamMember1;
		std::cout << "Fighter for Team 1 is " << fighter1->getName() << std::endl;
		fighter2 = front2->teamMember2;
		std::cout << "Fighter for Team 2 is " << fighter2->getName() << std::endl;

		//start attacks and defenses
		do
		{
			std::cout << "Tournament match: " << tournyMatch << std::endl;
			if (rounds % 2 == 0)
			{
				std::cout << "Round: " << rounds << std::endl;
				attackPts = fighter1->getAttack();
				std::cout << fighter1->getName() << " attacks with " << attackPts << " points" << std::endl;
				defensePts = fighter2->getDefense();
				std::cout << fighter2->getName() << " defends with " << defensePts << " points" << std::endl;
				//calculate damage done
				damageDone = attackPts - defensePts;
				//subtract armor from the damage done
				std::cout << "Armor applied: " << fighter2->getArmor() << std::endl;
				damageDone -= fighter2->getArmor();
				if (damageDone <= 0) //negative damage
				{
					damageDone = 0;
					updateStrength = fighter2->getStrength();
					std::cout << "Defense was strong! No damage done." << std::endl;
				}
				else //postive damage
				{
					std::cout << fighter1->getName() << " did " << damageDone << " points of damage to ";
					std::cout << fighter2->getName() << std::endl;
					//subtract damage done from stregnth points
					updateStrength = fighter2->getStrength() - damageDone;
					fighter2->setStrength(updateStrength);
				}
				if (fighter2->getStrength() <= 0)
				{
					std::cout << fighter1->getName() << " has defeated " << fighter2->getName() << " !" << std::endl;
					//losingTeam = 2;
					team1Points++; //increase team points
					addCreature(3, fighter2); //adding to loser stack
					removeCreature(2);	//remove fighter 2 from team queue
					//restore strength
					int tempStrength = fighter1->getStrength();
					tempStrength = (tempStrength / 2) + tempStrength;
					fighter1->setStrength(tempStrength); //strength for next round = current strength + half of current
					moveCreature(1); //move fighter 1 to back

					//end battle
					endRound = true;
				}
				else
				{
					//display round stats them move to next round
					std::cout << "Round " << rounds << ": " << fighter1->getName() << " strength: ";
					std::cout << fighter1->getStrength() << std::endl;
					std::cout << "Round " << rounds << ": " << fighter2->getName() << " strength: ";
					std::cout << fighter2->getStrength() << std::endl;
				}
				//increase rounds
				rounds++;
			}
			else
			{
				std::cout << "Round: " << rounds << std::endl;
				attackPts = fighter2->getAttack();
				std::cout << fighter2->getName() << " attacks with " << attackPts << " points" << std::endl;
				defensePts = fighter1->getDefense();
				std::cout << fighter1->getName() << " defends with " << defensePts << " points" << std::endl;
				//calculate damage done
				damageDone = attackPts - defensePts;
				//subtract armor from the damage done
				std::cout << "Armor applied: " << fighter1->getArmor() << std::endl;
				damageDone -= fighter1->getArmor();
				if (damageDone <= 0) //negative damage
				{
					damageDone = 0;
					updateStrength = fighter1->getStrength();
					std::cout << "Defense was strong! No damage done." << std::endl;
				}
				else //postive damage
				{
					std::cout << fighter2->getName() << " did " << damageDone << " points of damage to ";
					std::cout << fighter1->getName() << std::endl;
					//subtract damage done from stregnth points
					updateStrength = fighter1->getStrength() - damageDone;
					fighter1->setStrength(updateStrength);
				}
				if (fighter1->getStrength() <= 0)
				{
					std::cout << fighter2->getName() << " has defeated " << fighter1->getName() << " !" << std::endl;
					//set team to 1
					team2Points++; //increase team 2 points
					addCreature(3, fighter1); //add fighter 1 to loser pile
					removeCreature(1); //remove fighter 1 from team 1
					//restore strength
					int tempStrength = fighter2->getStrength();
					tempStrength = (tempStrength / 2) + tempStrength;
					fighter2->setStrength(tempStrength); //new strength for next battle is current strenght + half of current
					moveCreature(2); //move fighter 2 to end of queue

					//end round
					endRound = true;
				}
				else
				{
					//display round stats them move to next round
					std::cout << "Round " << rounds << ": " << fighter1->getName() << " strength: ";
					std::cout << fighter1->getStrength() << std::endl;
					std::cout << "Round " << rounds << ": " << fighter2->getName() << " strenght: ";
					std::cout << fighter2->getStrength() << std::endl;
				}
				//increase rounds
				rounds++;
			}
		} while (endRound != true);

		//increase match number
		tournyMatch++;

		//print losers
		//printTeams(3);

	}while (!(isEmpty(1) || isEmpty(2)));  //both are not empty

	int choice;
	if (team2Points > team1Points)
	{
		//winning team is team 2
		std::cout << "Winning team is team 2!" << std::endl;
		//print results
		printResults();
		//option to displayer loser pile
		choice = menu4();
		if (choice == 1)
		{
			printTeams(3);
			deleteTeams(1);
			deleteTeams(2);
			deleteTeams(3);
		}
		else
		{
			deleteTeams(1);
			deleteTeams(2);
			deleteTeams(3);
			std::cout << "Thanks for playing!" << std::endl;
		}
	}
	else
	{
		//winning team is team 1
		std::cout << "Winning team is team 1!" << std::endl;
		//print results
		printResults();
		//option to displayer loser pile
		choice = menu4();
		if (choice == 1)
		{
			printTeams(3);
			deleteTeams(1);
			deleteTeams(2);
			deleteTeams(3);
		}
		else
		{
			deleteTeams(1);
			deleteTeams(2);
			deleteTeams(3);
			std::cout << "Thanks for playing!" << std::endl;
		}
	}
}

/***********************************************************************************
**Input: integer representing the team
** Output: void
** Description: prints out the creature names in the given team
***********************************************************************************/
void Tournament::printTeams(int teamIn)
{
	if(teamIn == 1)
	{
		std::cout << "Team 1 creatures include: " << std::endl;
		//print team 1
		team1 *temp = front1;
		while (temp != NULL)
		{
			//print value in current node
			std::cout << temp->teamMember1->getName() << std::endl;
			//set temp to next node
			temp = temp->next1;
		}
		
	}
	else if(teamIn == 2)
	{
		std::cout << "Team 2 creatures include: " << std::endl;
		//print losers
		team2 *temp = front2;
		while (temp != NULL)
		{
			//print value in current node
			std::cout << temp->teamMember2->getName() << std::endl;
			//set temp to next node
			temp = temp->next2;
		}

	}
	else if(teamIn == 3)
	{
		std::cout << "The losing creatures include: " << std::endl;
		//print losers
		losers *temp = frontL;
		while (temp != NULL)
		{
			//print value in current node
			std::cout << temp->loser->getName() << std::endl;
			//set temp to next node
			temp = temp->nextL;
		}
	}
}

/**********************************************************************
** Input: none
** Output: none
** Description: deletes whatever is remaining in the teams
**********************************************************************/
void Tournament::deleteTeams(int teamIn)
{
	if(teamIn ==1)
	{
		if(isEmpty(1))
		{
			std::cout << "Team 1 is empty" << std::endl;
		}
		else
		{
			team1 *temp = front1;
			while(temp != NULL)
			{
				team1 *garbage = temp;
				temp = temp->next1;
				delete garbage->teamMember1;
				delete garbage;
			}
			front1 = NULL;
			back1 = NULL;
		}

	}
	if(teamIn == 2)
	{
		if(isEmpty(2))
		{
			std::cout << "Team 2 is empty" << std::endl;
		}
		else
		{
			team2 *temp = front2;
			while(temp != NULL)
			{
				team2 *garbage = temp;
				temp = temp->next2;
				delete garbage->teamMember2;
				delete garbage;
			}
			front2 = NULL;
			back2 = NULL;
		}

	}
	if(teamIn == 3)
	{
		losers *temp = frontL;
		while(temp != NULL)
		{
			losers *garbage = temp;
			temp = temp->nextL;
			delete garbage->loser;
			delete garbage;
		}
		frontL = NULL;
		backL = NULL;
	}
}

/*********************************************************************
** Input: none
** Output: none
** Description: prints the tournament results by printing the points
** for each team and who has the most points is the winner
*********************************************************************/
void Tournament::printResults()
{
	std::cout << "-------TOURNAMENT RESULTS -------" << std::endl;
	std::cout << "Team 1 had " << team1Points<< " points" << std::endl;
	std::cout << "Team 2 had " << team2Points << " points" << std::endl;
	if (team1Points > team2Points)
	{
		std::cout << "Team 1 is the winner!" << std::endl;
	}
	else
	{
		std::cout << "Team 2 is the winner!" << std::endl;
	}
}

/*********************************************************************
** Input: integer representing a team
** Output: none
** Description: tests to see if the team struct is empty or not
*********************************************************************/
bool Tournament::isEmpty(int teamIn)
{
	if (teamIn == 1) //team 1
	{
		if (front1 == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (teamIn == 2) //team 2
	{
		if (front2 == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (teamIn == 3) //losers
	{
		if (frontL == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

/*********************************************************************
** Input: none
** Output: none 
** Description: Destructor for the tournament class, deletes dynamically
** allocated pointers
*********************************************************************/
Tournament::~Tournament()
{
	//delete creatures
	delete fighter1;
	delete fighter2;
	delete temp1;

	//delete nodes
	delete front1;
	delete back1;
	delete front2;
	delete back2;
	delete frontL;
	delete backL;
}
