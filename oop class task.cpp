#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
struct user{
	string name;
    int sapid;
	int semester;
	float cgpa;
}D;
void detail()
{
    cout<<" Name : ";
    cin>>D.name;
	cout<<" Sapid : ";
    cin>>D.sapid;
	cout<<" semester : ";
	cin>>D.semester;
	cout<<" Cgpa : ";
    cin>>D.cgpa;
	fstream studata;
     studata.open("studentData.txt",ios::app);
     studata<<D.name;
     studata<<"\t"<<D.sapid;
     studata<<"\t"<<D.semester;
     studata<<"\t"<<D.cgpa;
     studata<<"\n_________________________________\n";
     studata.close();
}		
void showdetails()
{
        cout<<" Students details are as follows "<<endl;	
		fstream studata;
	    studata.open("studentData.txt", ios::in);
        string std; 
        cout<<"...............................................\n";
	    while(getline(studata,std,' ')) {
        cout <<std<<endl; 
	}
	  studata.close();
	string split;			
	stringstream ss(std);
	cout<<"========Splitting========"<<endl;
	while(ss >> split){
		cout<<split<<endl;
}
}
int main()
{
int choice;
    do
    {
    cout<<"--------STUDENT PORTAL---------\n";
    
    cout<<"  Press 1 to add details:\n ";
    cout<<" Press 2 to show details:\n ";
    cout<<" Press 3 for exit!\n ";
    cout<<" Enter choice ";
    cin>>choice;


    switch(choice)
    {
    	case 1:
    	system("cls");
    	detail();
    	break;
		case 2:
		system("cls");
		showdetails();
		break;
		case  3:
		system("cls");
		cout<<"Thank You for Using !";
		break;
		default:
		cout<<"  Enter valid number! ";		
	}
	
	
	}while(choice < 3);
    

}
