#include<iostream>

using namespace std;
class E
{
	private:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	public:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
	}
	protected:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
	E(int s,int se,float cg)
		{
			sapid=s;
			smester=se;
			cgpa=cg;
		}
public:
	
	E() 
	{
	cout<<" THE NULL CONSTRUCTOR IS RUNNING\n ";	
	  sapid=0;
	  smester=1;
	  cgpa=2;  
	}
	// DESTRUCTOR
	~ E()
	{
		
	}
	
	
	
};
class F:public  E{
	public:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	private:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
	}
	protected:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
};
class G:public F{
		protected:
	int sapid;
    void sap()
    {
    	cout<<" SAP ID IS ";
    	cin>>sapid;
	}
	private:
	int smester;
	void sme()
	{
	cout<<" THE SMESTER IS ";
	cin>>smester;
	}
	public:
	float cgpa;
	void cg()
	{
		cout<<" THE CGPA IS ";
	cin>>cgpa;	
	}
};

int main()
{
	E e1;
	e1.sme();
	F f1;
	f1.sap();
	G g1;            // Due to multilevel inheritence it give access.
	g1.cg();
}

