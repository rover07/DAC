#include "accounts.h"
#include <cstring>

int Accounts::account_count = 0; 

Accounts::Accounts(){
    fname = nullptr; 
    lname = nullptr; 
    email = nullptr; 
    mobileNumber = 0; 
    account_count = 0; 
    balance = 0;
    // id = '\0'; 
}

Accounts::Accounts(int mnumber, const char *first_name, const char *last_name, const char *emailid){
    mobileNumber = mnumber; 
    email=new char[strlen(emailid)+1];
    strcpy(email, emailid); 
    lname = new char[strlen(last_name)+1];
    strcpy(lname, last_name); 
    fname = new char[strlen(first_name)+1];
    strcpy(fname, first_name);
    this->account_count ++; 

    strncpy(id, first_name, 3);
    id[3] = '\0'; 
    strncat(id,last_name, 3);  
    id[6] = '\0';
    // id[7]= (char)(account_count + '0');
    balance = 0;

}
void Accounts::display(){
    cout << "id :" << id << "\n name :" << fname<< " " << lname << "\n mobile number :" << mobileNumber << "\n email id:" 
    << email << "\n balance:" << balance << endl;     
}

void Accounts::addBalance(double number){
    this->balance +=number;
}

void Accounts::setBal(int number){
    this->balance +=number;
}

int Accounts::getBal(){
    return this->balance;
}

int Accounts::getAccountCount(){
    return account_count; 
}
char* Accounts::getid(){
    return id; 
}

char* Accounts::getfname(){
    return fname; 
}
