#include"wk.h"

	void WicketKeeper::wk_info(){
			cout << "Enter Jersey Number: ";
			cin >> jersy;
			cout << "Enter Name: ";
			cin >> name;
			for(int i=0; i<3; i++){
			cout << "Enter Rankings (Test, ODI & T20I): ";
			cin >> ranking[i];
			}
			cout << "Enter Batting Style (Left/Right): ";
			cin >> battingstyle;
			cout << "Enter Total Catches: ";
			cin >> totalcatches;
			cout << "Enter Total Stumps: ";
			cin >> totalstumps;
		}
		
		
	
		
		void WicketKeeper::disp_wk(){
			cout << "Jersey Numer: " << jersy << endl;
			cout << "Batsmen's Name: " << name << endl;
			for(int k=0; k<3; k++){
				cout << "Batting Rankings (Test, ODI & T20I): " << ranking[k] << endl;
			}
			cout << "Batting Style: " << battingstyle << endl;
			cout << "Total Catches: " << totalcatches << endl;
			cout << "Total Stumps: " << totalstumps << endl;
		}
		void WicketKeeper::wk(){
			cout << "Keeper is catching the ball!!!" << endl;
			cout << "Keeper is stumping!!!" << endl;
}