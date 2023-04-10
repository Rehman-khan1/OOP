#ifndef BATSMEN_H
#define BATSMEN_H
#include "Players.h"

class Batsman : public Players {
	public :
	char battingstyle[20];
	int totalscore;
	float avg;
	float strike_rate; 
	void batsman();
	void Bats ();
	void diplaybatsman_data();
	
};

#endif