// #include "accounts.h" 

#include "savingaccount.h"
#include "currentaccount.h"
#include "accountservice.h"

int main(){
    // Accounts acc(799399, "anshu", "sinha", "sky@gmail.com"); 
    // acc.display();
    // Accounts acc1(799399, "anshu", "sinha", "sky@gmail.com");
    // acc.display();

    // CurrentAccount ca1(799399, "anshu", "sinha", "sky@gmail.com");
    // ca1.display() ;

    // SavingAccount sa1(799399, "anshu", "sinha", "sky@gmail.com"); 
    // sa1.display();

    // cout << "---------------------"<<endl; 


    // Accounts* accpointer = new CurrentAccount(799399, "anshu", "sinha", "sky@gmail.com");

    // accpointer->display();
    // delete accpointer;
    
    
    int choice; 

    do{
        cout << "------------------------------------Menu------------------------------------------" << endl; 
        cout <<"1. Add new account" << endl; 
        cout << "2. Display All Accounts"<< endl;
        cout << "3. Search by account number"<< endl;
        cout << "4. Search by Name"<< endl;
        cout << "5. Sort Accounts by balance"<< endl;
        cout << "6. Display All Saving Account"<< endl;
        cout <<"7. Display All Current Account " << endl;
        cout << "8. Exit" << endl;

        cout << "Enter the choice"<< endl; 
        cin >> choice; 

        switch(choice){
            case 1: 
                AccountService::addAccount();
                break; 
            case 2: 
                AccountService::displayAccounts(); 
                break;
            case 3:
                char id[10];   
                cout << "Enter the id that need to be searched \n"; 
                cin >> id; 
                AccountService::searchAccount(id); 
                break; 
            case 4:
                char fname[50];   
                cout << "Enter the fname that need to be searched \n"; 
                cin >> fname; 
                AccountService::searchName(fname); 
                break; 
            case 5:
                AccountService::sortAccountsBalance();
                break;

            case 6 :
                AccountService::savingAccounts();
                break;

            case 7 :
                AccountService::currentAccounts();
                break;

            default:
                cout<<"------------Thankyou------------"<<endl;
            }

    }while(choice!=8); 

    
}

