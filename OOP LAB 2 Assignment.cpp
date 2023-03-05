#include<iostream>
using namespace std;
class duration{
	int days;
	int hours;
	int minutes;
	int seconds;
	public :
	duration()
	{
	    days=0;
    	hours=0;
    	minutes=0;
    	seconds=0;
	}
	
	duration(int d,int h,int m,int s)
	{
	    days=d;
	    hours=h;
    	minutes=m;
    	seconds=s;
	}
	duration(int se)
	{
     	days=se/86400;
 	    seconds=se-days;
	    hours=seconds/3600;
	    seconds=seconds-hours;
	    seconds %=3600;
	    minutes=seconds/60;
	    seconds=seconds%60;
	}
	void calculation()
    {
    	cout<< "days "<<days<<"\n hours "<<hours<< "\n minutes "<<minutes<<"\n seconds "<<seconds<<endl;
	}
	int show (int se)
	{
		cout<<"The Duration in Seconds is: "<<se<<endl;
		return se;
	}
};
int main()
{
 int se;
 cout<<"Enter seconds: ";
 cin>>se;
 duration d1(se);
 d1.calculation();
 d1.show(se);
}
