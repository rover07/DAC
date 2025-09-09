#include <iostream>
#include "Person.h"
#include "TestServices.h" 

using namespace std; 

int main() {
    const int maxPeople = 10;
    Person* people[maxPeople];
    //Person* people[maxPeople] = {nullptr};
    int personCount = 0;
    int choice;

    do {
        cout << "1. Add New Person" << endl;
        cout << "2. Display All People" << endl;
        cout << "3. Search by ID" << endl;
        cout << "4. Search by Name" << endl;
        cout << "5. Modify Address by ID" << endl;
        cout << "6. Find Address by ID" << endl;
        cout << "7. Display by City" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: "<<endl;
        cin >> choice;
        cin.ignore(100, '\n'); 

        switch (choice) {
            case 1:
                addNewPerson(people, personCount, maxPeople);
                break;
            case 2:
                displayAll(people, personCount);
                break;
            case 3:
                searchById(people, personCount);
                break;
            case 4:
                searchByName(people, personCount);
                break;
            case 5:
                modifyAddress(people, personCount);
                break;
            case 6:
                findAddressById(people, personCount);
                break;
            case 7:
                displayByCity(people, personCount);
                break;
            case 8:
                cout << "Exiting program. Cleaning up memory..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    
    for (int i = 0; i < personCount; ++i) {
        delete people[i];
    }

    return 0;
}


