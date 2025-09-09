#include "accounts.h"

const int currentInterestRate= 1;
class CurrentAccount:public Accounts{
    private:
        int transactions_day;
        double avg_annual_balance; 
        int min_transactions =10; 

    public:
        CurrentAccount(); 
        CurrentAccount(int mnumber, const char *first_name, const char *last_name, const char *emailid); 
        // ~CurrentAccount(); 

        void display(); 
        double Avg_annual_balance(); 
        int CalTransacationsDay(double number);
}; 