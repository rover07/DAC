#include "savingaccount.h"

SavingAccount::SavingAccount(){
    chequeBookNumber = 0; 
}

SavingAccount :: SavingAccount(int mnumber, const char *first_name, const char *last_name, const char *emailid)
:Accounts(mnumber, first_name, last_name, emailid){
    this->chequeBookNumber = GeneratechequeBookNumber();
    Accounts::setBal(minimumSaving);
}

int SavingAccount::GeneratechequeBookNumber(){
    return 1110*(Accounts::getAccountCount()) + (Accounts::getAccountCount());
}

void SavingAccount::display(){
    Accounts::display(); 
    cout << "chequeBookNumber:" << chequeBookNumber << endl; 
}