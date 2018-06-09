/*********************************************************************
** Program name: tournament.hpp
** Author: Anne Harris
** Date: May 19, 2017
** Description: Contains the class Tournament member variables and 
** member functions prototype. This class sets up three structs for 
** the two teams and the losers pile
*********************************************************************/

#ifndef TOURNAMENT_HPP
#define TOURNAMENT _HPP

#include<iostream>
#include"creature.hpp"

class Tournament
{
private:
	int attackPts;
	int defensePts;
	int damageDone;
	int team1Points;
	int team2Points;
	Creature *temp1;
	Creature *fighter1;
	Creature *fighter2;
	
	struct team1
	{
		Creature *teamMember1;
		team1 *next1;
		team1 *previous1;
		team1(Creature *creatureIn, team1* nextIn = NULL, team1* prevIn = NULL)
		{
			teamMember1 = creatureIn;
			next1 = nextIn;
			previous1 = prevIn;
		}
	};
	team1 *front1;
	team1 *back1;
	struct team2
	{
		Creature *teamMember2;
		team2 *next2;
		team2 *previous2;
		team2(Creature *creatureIn, team2* nextIn = NULL, team2* prevIn = NULL)
		{
			teamMember2 = creatureIn;
			next2 = nextIn;
			previous2 = prevIn;
		}
	};
	team2 *front2;
	team2 *back2;
	struct losers
	{
		Creature *loser;
		losers *nextL;
		losers *previousL;
		losers(Creature *creatureIn, losers *nextIn = NULL, losers *prevIn = NULL)
		{
			loser = creatureIn;
			nextL = nextIn;
			previousL = prevIn;
		}
	};
	losers *frontL;
	losers *backL;

public:
	Tournament();
	void fillTeam(int, int);
	void addCreature(int, Creature*);
	void removeCreature(int);
	void moveCreature(int);
	void setFighter();
	void startBattle();
	void deleteTeams(int);
	void printTeams(int);
	void printResults();
	bool isEmpty(int);
	~Tournament();
};

#endif 
