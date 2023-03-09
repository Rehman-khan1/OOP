#include<iostream>
#include<fstream>
using namespace std;
struct user{
	string name;
    long contactno;
	int rollnumber;
	string city;
}D;
void data()
{
	fstream userdata;
     userdata.open("Userdata.txt",ios::out);
     userdata<<" Name "<<D.name<<endl;
     userdata<<" contact no "<<D.contactno<<endl;
     userdata<<" Roll number  "<<D.rollnumber<<endl;
     userdata<<" City name "<<D.city<<endl;
     userdata.close();
     cout<< "Data of the user\n";
}
int main()
{
	cout<<" Name of user: ";
	getline(cin,D.name);
	cout<<" Contact number of user: ";
    cin>>D.contactno;
	cout<<" Roll number: ";
	cin>>D.rollnumber;
	cout<<" City name: ";
    cin>>D.city;
    data();
		fstream userdata;
	   userdata.open("UserData.txt", ios::in);
        string line;
        while(getline(userdata,line)) {
        cout<<"...............................................\n";
        cout <<line<<endl; 
	}
	userdata.close();
}
