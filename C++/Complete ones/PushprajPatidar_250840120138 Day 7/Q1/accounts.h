#ifndef ACCOUNTS_H
#define ACCOUNTS_H
#include<iostream>
using namespace std; 
const int minimumSaving=20000, minimumCurrent=1000; 

class Accounts{
    private: 
    char *fname, *lname, *email; 
    long int mobileNumber; 
    static int account_count;
    char id[10];
    int balance;

    public:
        Accounts(); 
        Accounts(int mnumber, const char *first_name, const char *last_name, const char *emailid); 
        // Virtual becoz we want it to wait till run time. we use it when we assign the object dynamincally
        virtual void display(); 
        void addBalance(double number);
        void setBal(int number); 
        int getBal(); 
        int getAccountCount(); 
        char * getid(); 
        char * getfname(); 
};

#endif

