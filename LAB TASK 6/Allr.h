#ifndef AR_H
#define AR_H
#include "Bat.h"
#include "Bowl.h"


class AllRounder : public Bowler, public Batsman{
	public:
	string battingstyle;
	int totalscore;
	float avg;
	float strike_rate; 
	string bowlingstyle;
	float bowlavg;
	float bowlspeed;
	int totalwick;
	
	void AllRounderinfo();
	void Allrounder();
	void disp_AllRounder();
};

#endif