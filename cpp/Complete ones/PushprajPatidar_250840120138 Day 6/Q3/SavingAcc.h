#include "Account.h" 
class SavingAcc : public Account{
	static  char acctype[20];
	static float interest;
	static int minBal;
	char* chequeBookNum;
  public:
  	SavingAcc();
  	SavingAcc(char* fname,char* lname,char* mobile,char* email, char* cbn);
  	~SavingAcc();
  	const char* getAcctype();
  	float getInterest();
  	int getMinBal();
  	const char *getChequeBookNum();
  	void setChequeBookNum(char* cbn);
  	void display();
	
	
};
