#include "accountservice.h"
#include "accounts.h"
#include "savingaccount.h"
#include "currentaccount.h"
#include <cstring>

Accounts* AccountService::aArr[100];
int AccountService::count = 0; 

void AccountService::addAccount(){
    int choice; 
    if (count > 100){
        cout << "Adding the accounts is not possible as it reached full. \n";
    }else{
        cout << "Enter which account needed  \n 1. Saving account \n 2. Current account \n "; 
        cin >> choice; 
        long int mnumber; 
        char first_name[50], last_name[50], email_id[100]; 
        cout << "Enter the mobilenumber \t first name \t last name \t email id \n"; 
        cin >> mnumber >> first_name >> last_name>> email_id; 
        switch(choice){
            case 1:

                aArr[count] = new SavingAccount(mnumber, first_name, last_name, email_id);
                break; 
            case 2: 
                aArr[count] = new CurrentAccount(mnumber, first_name, last_name, email_id);
                break; 
            default: 
                cout<< "Enter the correct choice \n"; 
        }
        aArr[count]->display(); 
        count++;
    }
}

void AccountService::displayAccounts(){
    for (int i=0; i<count; i++){
        aArr[i]->display(); 
    }
}

void AccountService::searchAccount(char *iD){
    for (int i=0; i<count; i++){
      
  if(strcmp(aArr[i]->getid(), iD) ==0){
            aArr[i]->display();
            return; 
        }
    }
    cout << "The account is not found with " << iD << endl;
}

void AccountService::searchName(char *nm){
    for (int i=0; i<count; i++){
        if(strcmp(aArr[i]->getfname(), nm) ==0){
            aArr[i]->display();
            return; 
        }
    }
    cout << "The account is not found with " << nm << endl;
}


void AccountService::sortAccountsBalance(){
    for (int i=0; i < count; i++){

        for (int j=0; j < count-1-i; j++)
            if(aArr[j]->getBal() > aArr[j+1]->getBal()){
                Accounts *temp = aArr[j]; 
                aArr[j] = aArr[j+1]; 
                aArr[j+1] = temp; 
        }
    }
}


void AccountService::showBalance(char *iD){
    for (int i=0; i<count; i++){
        if(strcmp(aArr[i]->getid(), iD) == 0){
      
      cout << "Balance in account is " << aArr[i]->getBal() << endl;
            return;
        }
    }
    cout << "There i no account with id " << iD << endl; 
}

void AccountService::savingAccounts(){
    for (int i=0; i<count; i++){
        if(dynamic_cast<SavingAccount*>(aArr[i])){
            aArr[i] ->display(); 
        }
    }
} 

void AccountService::currentAccounts(){
    for (int i=0; i<count; i++){
        if(dynamic_cast<CurrentAccount*>(aArr[i])){
            aArr[i] ->display(); 
        }
    }
} 
