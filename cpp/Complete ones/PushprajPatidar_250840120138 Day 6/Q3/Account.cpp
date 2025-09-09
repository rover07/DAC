#include "Account.h"
#include<cstring>
#include<iostream>
using namespace std;

int Account::count=0;
Account::Account(){
	cout<<"In Account's default constructor."<<endl;
	fname=nullptr;
	lname=nullptr;
	mobile=nullptr;
	email=nullptr;
	id=nullptr;
}

Account::Account(char* fname,char* lname,char* mobile,char* email){
	cout<<"In Account's parameterised constructor."<<endl;
	this->fname = new char[strlen(fname)+1];
	strcpy(this->fname, fname);
	this->lname = new char[strlen(lname)+1];
	strcpy(this->lname, lname);
	this->mobile = new char[strlen(mobile)+1];
	strcpy(this->mobile, mobile);
	this->email = new char[strlen(email)+1];
	strcpy(this->email, email);
	count++;  
	id = new char[20];
	id=generateId(fname, lname);
}


void Account::setFname(char* fname){
	delete[] this->fname;
	this->fname = new char[strlen(fname)+1];
	strcpy(this->fname, fname);
}

void Account::setLname(char* lname){
	delete[] this->lname;
	this->lname = new char[strlen(lname)+1];
	strcpy(this->lname, lname);

}

void Account::setMobile(char* mobile){
	delete[] this->mobile;
	this->mobile = new char[strlen(mobile)+1];
	strcpy(this->mobile, mobile);
}

void Account::setEmail(char* email){
	delete[] this->email;
	this->email = new char[strlen(email)+1];
	strcpy(this->email, email);
}


char* Account::generateId(char *fname, char *lname){
      
    
    int idx = 0;

    for (int i = 0; i < 3 && fname[i] != '\0'; i++) {
        id[idx++] = fname[i];
    }

    for (int i = 0; i < 3 && lname[i] != '\0'; i++) {
        id[idx++] = lname[i];
    }

    int temp = count;
    char numStr[10];
    int numLen = 0;

    do {
        numStr[numLen++] = (temp % 10) + '0';
        temp /= 10;
    } while (temp > 0);

    for (int i = numLen - 1; i >= 0; i--) {
        id[idx++] = numStr[i];
    }

    id[idx] = '\0';

    return id;
}

const char* Account::getFname(){
	return fname;
}

const char* Account::getLname(){
	return lname;
}

const char* Account::getMobile(){
	return mobile;
}

const char* Account::getEmail(){
	return email;
}
const char* Account::getId(){
	return id;
}


void Account::display(){
	cout<<"First name: "<<fname<<"  Last name: "<<lname<<endl<<"Mobile Number: "<<mobile<<endl<<"Email address: "<<email<<endl<<"Id: "<<id<<endl;
}

Account::~Account(){
	cout<<"In Account's destructor."<<endl;
	delete[] fname;
	delete[] lname;
	delete[] mobile;
	delete[] email;
	delete[] id;
};
