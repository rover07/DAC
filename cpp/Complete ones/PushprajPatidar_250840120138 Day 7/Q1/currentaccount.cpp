#include "currentaccount.h"

CurrentAccount::CurrentAccount(){
    transactions_day = 0; 
    avg_annual_balance = 0.0;  
}

CurrentAccount :: CurrentAccount(int mnumber, const char *first_name, const char *last_name, const char *emailid)
:Accounts(mnumber, first_name, last_name, emailid){
    Accounts::setBal(minimumCurrent);
    avg_annual_balance = Avg_annual_balance();
    transactions_day = CalTransacationsDay(avg_annual_balance);  

}

int CurrentAccount::CalTransacationsDay(double number){
    while(number > 0){
        return min_transactions + (int)number/1000; 
    } 
    return min_transactions;
}

double CurrentAccount::Avg_annual_balance(){
    return Accounts::getBal()/2; 
}


void CurrentAccount::display(){
    cout << "Transactions per day:" << transactions_day << endl;
    Accounts::display();
}