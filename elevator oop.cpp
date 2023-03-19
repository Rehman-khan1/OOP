#include<iostream>
using namespace std;
class Elevator {
	private :
	  string cur_loc;
	  string company_name;
	  string color;
	  float max_load;
	  string properties;
	  int model;
	  int id;
	  int validity;
	public :
	Elevator()
	{
		// null constructor
	  string cur_loc="\0";
	  string company_name="\0";
	  string properties="\0";
	  string color="\0";
	  float max_load=0;
	  int model=0;
	  int id=0;
	  int validity=0;	
	}
	
	// DESTRUCTOR
	
	~Elevator(){
		
	}
	
	Elevator(string loc,string Com_name,string t, string p,string c,float ml,int m,int ID,int vld )
	{
		// parameteric constructor
	  cur_loc= loc;
	  company_name= Com_name;
	  properties=p;
	  color=c;
	  max_load=ml;
	  model=m;
	  id=ID;
	   validity=vld;
    }
    
    // Display the detail of the Elavator
  
    void Details_of_Elevator(){
    	cout<<"--------- THE DETAILS ARE ----------\n";
    	cout<<"COMPANY NAME IS: "<<company_name<<endl;
    	cout<<"MAXIMUM LOAD IS: "<<max_load<<"KG"<<endl;
    	cout<<"CURRENT LOCATION IS: "<<cur_loc<<endl;
    	cout<<"COLOR IS: "<<color<<endl;
    	cout<<"ID IS: "<<id<<endl;
    	cout<<"MODEL IS: "<<model<<endl;
    	cout<<"VALIDITY IS: "<<validity<<endl;
	}
	
		void Up(){
			cout<<"Elevator's Going Up!!!"<<endl;
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
			cout<<"Thank You!!!"<<endl;
		}
		void Down(){
			cout<<"Elevator's Going Down!!!"<<endl;
			cout<<"\nWe Have Reached Your Destination!!!"<<endl;
			cout<<"Thank You!!!"<<endl;
		}
	
//   	getters and setters 
	
	void getCOMPANY(string Com_name){
		company_name = Com_name;	
	}
	string setCOM(){
		return company_name;
	}
	void getMAX(float ml){
		max_load=ml;	
	}
	float setMAX(){
		return max_load;
	}
	void gerCUR(string loc){
		cur_loc=loc;
	}
	string setCUR(){
		return cur_loc;
	}
	void getColor(string c){
		color=c;
	}
	string setColor(){
		return color;
	}
	void getModel(int m){
		model = m;
	}
	int setModel(){
		return model;
	}
	void getid(int ID){
		id=ID;
	}
	int setid(){
		return id;
	}
	void getvalidity(int vld){
    	validity = vld;
	}
	int setvalidity(){
		return validity;
	}
};


int main()
{
	
	string Com_name,c,loc,p;
	int m,ID,vld;
	float ml;
	Elevator E;
	int choice;	
	cout<<"ENTER ALL THE FOLOOWING DETAILS: "<<endl;
	cout<<"ENTER COMPANY NAME: ";
	cin>>Com_name;
	cout<<"ENTER MODEL: ";
	cin>>m;
	cout<<"ENTER MAXIMUM LOAD: ";
	cin>>ml;
	cout<<"ENTER COLOR: ";
	cin>>c;
	cout<<"ENTER CURRENT LOCATION: ";
	cin>>loc;
	cout<<"ENTER ID OF ELEVATOR: ";
	cin>>ID;
	cout<<"ENTER VALIDITY : ";
	cin>>vld;
	cout<<"ENTER PROPERIES: ";
	cin>>p;
	cout<<"PRESS 1 TO GO UP OR PRESS 2 TO GO DOWN: ";
	cin>>choice;
	switch (choice){
	 case 1:
	 	E.Up();
	 	break;
	case 2:
		E.Down();
	}
	E.getCOMPANY(Com_name);
	E.getMAX(ml);
	E.gerCUR(loc);
	E.getColor(c);
	E.getModel(m);
	E.getid(ID);
	E.getvalidity(vld);
	E.Details_of_Elevator();	
}
