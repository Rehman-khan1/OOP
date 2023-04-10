#ifndef WK_H
#define WK_H
#include "Players.h"

class WicketKeeper : public Players {
	   public : 
	   char battingstyle[25];
	    int totalcatches;
	    int totalstumps;
	    void wk_info();
	
		void wk();
		void disp_wk();
		
};

#endif