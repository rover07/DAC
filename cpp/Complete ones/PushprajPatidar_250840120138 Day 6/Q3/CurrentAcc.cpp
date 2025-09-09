	#include <iostream>
	#include "CurrentAcc.h"
	using namespace std;
	
	char CurrentAcc::acctype[20]="Current Account";
	float CurrentAcc::interest=0.1;
	int CurrentAcc::transPerDay=10; 
	int CurrentAcc::minBal=1000;
	
  	CurrentAcc::CurrentAcc(){
  		cout<<"In CurrentAcc's default constructor."<<endl;
  	}
  	
  	CurrentAcc::CurrentAcc(char* fname,char* lname,char* mobile,char* email) : Account(fname, lname, mobile, email){
  		cout<<"In CurrentAcc's parameterised constructor."<<endl;
  		
  	}
  	
  	const char *CurrentAcc::getAcctype(){
  		return acctype;
  	}
  	
  	
  	float CurrentAcc::getInterest(){
  		return interest;
  	}
  	
  	int CurrentAcc::getMinBal(){
  		return minBal;
  	}
  	
  	int CurrentAcc::getTransPerDay(){
  		return transPerDay;
  	}
	
	CurrentAcc::~CurrentAcc(){
		cout<<"In CurrentAcc's destructor."<<endl;
	}
	
	void CurrentAcc::display(){
		Account::display();
		cout<<"Account type: "<<acctype<<endl<<"Interest: "<<interest<<endl<<"Transactions allowed per day: "<<transPerDay<<endl<<"Minimum required balance : "<<minBal<<endl;
	}
