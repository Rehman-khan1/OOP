		#include"bowl.h"
		
		
			void Bowler::bowlerinfo()
			{
				cout<<"type  bowler name is:";
			cin>>name;
				cout<<" type jersy number is ";
				cin>>jersy;
					for(int i=0;i<=2;i++)
	{
		cout<<" THE RANKING IS (Test,ODI,T20)";
		cin>>ranking[i];
		
	}
	cout<<"Type bowling style ";
	cin>>bowlingstyle;
	cout<<" Type bowl average ";
	cin>>bowlavg;
	cout<<" The bowl speed ";
	cin>>bowlspeed;
	cout<<" Type the wickets taken by the bowler ";
	cin>>totalwick;
	cout<<" Type bowling strike rate ";
	cin>>strike_rate;
	
			}
				
		void Bowler::dispBowl()
		{
			cout << "Jersey Numer: " << jersy << endl;
			cout << "Batsmen's Name: " << name << endl;
			for(int k=0; k<3; k++){
				cout << "Bowling Rankings (Test, ODI & T20I): " << ranking[k] << endl;
			}
			cout << "Bowling Style: " << bowlingstyle << endl;
			cout << "Bowling Speed: " << bowlspeed << endl;
			cout << "Total Wickets: " << totalwick << endl;
			cout << "Bowling Average: " << bowlavg << endl;
			cout << "Bowling Strike Rate: " << strike_rate << endl;
		}
			
			void Bowler::bowl(){
			cout<<" Bowler is bowling!! "<<endl;
			cout<<" Bowler change the bowling side "<<endl;
		}
			