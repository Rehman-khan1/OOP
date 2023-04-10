#include "Bat.cpp"
#include "bowl.cpp"
#include "wk.cpp"
#include "Allr.cpp"

int main(){
	Batsman Bt;
	Bowler Bo;
    WicketKeeper wkp;
	AllRounder Alr;
	
	int choice;
	char again;
	
	cout << "\t\t\t\t\t\t\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc" << endl<<endl ;
	cout << "\t\t\t\t*****************Cricket Simulator*****************" << endl << endl;
	cout << "\t\t\t\t\t\t\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc" << endl;
	do{
	cout << "\t********Menu********" << endl << endl;
	cout<<"   1. Add Batsman \n";
	cout<<"   2. Batting \n";
	cout<<"   3. Display Batsman \n";
	cout<<"   4. Add Bowler \n";
	cout<<"   5. Display Bowler \n";
	cout<<"   6. Bowler \n";
	cout<<"   7. Add WicketKeeper \n";
	cout<<"   8. WicketKeeper \n";
	cout<<"   9. Display WicketKeeper \n";
	cout<<"   10. Add All-Rounder \n";
	cout<<"   11. All-Rounder \n";
	cout<<"   12. Display All-Rounder \n";
	cout<<"   13. Exit " <<endl;
	cout << "Please Select the choice: ";
	cin >> choice;
	switch(choice){
		case 1:			
			Bt.batsman();
			break;
		case 2:
			Bt.Bats();
			break;
		case 3:			
			Bt.diplaybatsman_data();
			break;
		case 4:
			Bo.bowlerinfo();
			break;
		case 5:
			Bo.dispBowl();
			break;
		case 6:
			Bo.bowl();
			break;
		case 7:
			wkp.wk_info();
			break;
		case 8:
			wkp.wk();
			break;
		case 9:
			wkp.disp_wk();
			break;
		case 10:
			Alr.AllRounderinfo();
			break;
		case 11:
			Alr.Allrounder();
			break;
		case 12:
			Alr.disp_AllRounder();
			break;
		case 13:
			cout << " Thanks! " << endl;
			break;
		default:
			cout << "Entery is invalid!" << endl;
			break;
		}
	cout << "Want to use again (Y/N)?";
	cin >> again;
	}
	while(again == 'y' || again == 'Y');
	
	return 0;
}
