#include "Allr.h"

	void AllRounder::AllRounderinfo()
	{
		cout<<"\n";
		cout<<"BATTING STYLE:";
		cin>>battingstyle;
		cout<<"TOTAL SCORE: ";
		cin>>totalscore;
		cout<<"TOTAL AVERAGE: ";
		cin>>avg;
		cout<<"STRIKE RATE: ";
		cin>>strike_rate;
		cout<<"BOWLING STYLE:";
		cin>>bowlingstyle;
		cout<<"TOTAL BOWLING AVERAGE: ";
		cin>>bowlavg;
		cout<<"BOWLING SPEED: ";
		cin>>bowlspeed;
		cout<<"TOTAL WICKETS: ";
		cin>>totalwick;	
	}
	
	void AllRounder:: Allrounder(){
			cout<<"\n";
		cout<<"Allrounder is on Batting!"<<endl;
		cout<<" Now Allrounder is On Bowling!"<<endl;
	}
	
	void AllRounder::disp_AllRounder(){
			cout<<"\n";
		cout<<"Batting Style: "<<battingstyle<<endl;
		cout<<"Total Score: "<<totalscore<<endl;
		cout<<"Total Average: "<<avg<<endl;
		cout<<"Total StrikeRate: "<<strike_rate<<endl;
		cout<<"Bowling Style: "<<bowlingstyle<<endl;
		cout<<"Bowling Average: "<<bowlavg;
		cout<<"Bowling Speed: "<<bowlspeed;
		cout<<"Total Wickets: "<<totalwick;
	}