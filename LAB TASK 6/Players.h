#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;

class Players{
	public : 
	int jersy;
    string name;
	int ranking[2];
	
	Players(){
		jersy=1;
		name=2;
		ranking[2]=3;
	}
	~ Players (){	}
};

#endif