#include <iostream>
#include<cstring>
#include "SavingAcc.h"

using namespace std;

	char SavingAcc::acctype[20]="Saving Account";
	float SavingAcc::interest=0.4;
	int SavingAcc::minBal=20000;

  	SavingAcc::SavingAcc(){
  		cout<<"In SavingAcc's default constructor."<<endl;
  		chequeBookNum=nullptr;
  	}
  	
  	SavingAcc::SavingAcc(char* fname,char* lname,char* mobile,char* email, char* cbn) : Account(fname, lname, mobile, email){
  		cout<<"In SavingAcc's parameterised constructor."<<endl;
  		chequeBookNum = new char[strlen(cbn)+1];
		strcpy(chequeBookNum, cbn);	
  	}
  	
  	const char *SavingAcc::getAcctype(){
  		return acctype;
  	}
  	
  	
  	float SavingAcc::getInterest(){
  		return interest;
  	}
  	
  	int SavingAcc::getMinBal(){
  		return minBal;
  	}
  	
  	const char* SavingAcc::getChequeBookNum(){
  		return chequeBookNum;
  	}
  	
  	void SavingAcc::setChequeBookNum(char* cbn){
  		delete[] chequeBookNum;
  		chequeBookNum = new char[strlen(cbn)+1];
		strcpy(chequeBookNum, cbn);	
  	}
  	
  	void SavingAcc::display(){
  		Account::display();
		cout<<"Account type: "<<acctype<<endl;
		cout<<"Interest: "<<interest<<endl;
		cout<<"Cheque book number: "<<chequeBookNum<<endl;
		cout<<"Minimum required balance : "<<minBal<<endl;
		}
	
	SavingAcc::~SavingAcc(){
		cout<<"In SavingAcc's destructor."<<endl;
	}
	
