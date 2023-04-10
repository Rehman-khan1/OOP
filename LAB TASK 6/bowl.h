#ifndef BOWLER_H
#define BOWLER_H
#include "Players.h"

class Bowler : public Players {
	public : 
char bowlingstyle[30];
			float bowlavg;
			float bowlspeed;
			int totalwick;
			float strike_rate;
    void bowlerinfo();
	void dispBowl();
	void bowl();
};

#endif