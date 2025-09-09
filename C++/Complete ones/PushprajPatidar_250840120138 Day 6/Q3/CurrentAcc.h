#include "Account.h"
class CurrentAcc : public Account{
	static char acctype[20];
	static float interest;
	static int transPerDay, minBal;
	
  public:
  	CurrentAcc();
  	CurrentAcc(char* fname,char* lname,char* mobile,char* email);
  	const char *getAcctype();
  	float getInterest();
  	int getMinBal();
  	int getTransPerDay();
  	void display();
	~CurrentAcc();
	
};
