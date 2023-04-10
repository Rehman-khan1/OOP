#include"Bat.h"

void Batsman::batsman()		
	{
	    cout<<" Enter the name ";
	   cin>>name;
		cout<<" Enter the jersy number ";
		cin>>jersy;
		for(int i=0;i<=2;i++)
	{
		cout<<" THE RANKING IS (Test,ODI,T20)";
		cin>>ranking[i];
		
	}
	cout<<"Enter batting style ";
	cin>>battingstyle;
	cout<<" Total score  ";
	cin>>totalscore;
	cout<<" The strike rate ";
	cin>>strike_rate;
	cout<<" The average is ";
	cin>>avg;	
	}
	void Batsman::diplaybatsman_data()
{
	cout<<"  The Name is "<<name<<endl;
	cout<<" The jersy number "<<jersy<<endl;
	cout<<" The ranking (Test,ODI,T20)";
	for (int k=0;k<=2;k++)
{
	cout<<" Ranking: "<<ranking[k];
	
}
    cout<<" The batting style is "<<battingstyle;
	cout<<" The total score is: "<<totalscore<<endl;
	cout<<" The strike rate is "<<strike_rate<<endl;
}
	
	void Batsman::Bats()
	{
		cout<<" The batsman is hitting the ball!! ";
		cout<<" Batsman is taking runs through singles,doubles,four,six ";
		
	}