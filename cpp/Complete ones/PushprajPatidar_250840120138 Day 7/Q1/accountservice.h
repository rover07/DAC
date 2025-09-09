#include "accounts.h"

class AccountService{
    private:
        static Accounts* aArr[100]; 
        static int count; 
    public:

        static void addAccount(); 
        static void displayAccounts(); 
        static void searchAccount(char *iD); 
        static void searchName(char *nm); 
        static void sortAccountsBalance(); 
        static void showBalance(char *iD); 
        static void savingAccounts(); 
        static void currentAccounts();

}; 


