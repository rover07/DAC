#include "accounts.h"

const int savingInterestRate = 4;
class SavingAccount:public Accounts{
    private:
        int chequeBookNumber; 
        
    public:
        SavingAccount(); 
        SavingAccount(int mnumber, const char *first_name, const char *last_name, const char *emailid); 
        // ~SavingAccount(); 

        void display(); 
        int GeneratechequeBookNumber(); 


}; 