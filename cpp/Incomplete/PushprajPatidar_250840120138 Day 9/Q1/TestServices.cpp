#include "TestServices.h"
#include <iostream>
#include <cstring>

using namespace std;

void addNewPerson(Person* people[], int& count, int maxSize) {
    if (count >= maxSize) {
        cout << "Cannot add more people. The array is full." << endl;
        return;
    }

    people[count] = new Person();
    people[count]->accept();
    count++;
    cout << "Person added successfully." << endl;
}

void displayAll(Person* people[], int count) {
    if (count == 0) {
        cout << "No people to display." << endl;
        return;
    }
    cout << "\n--- Displaying All People ---" << endl;
    for (int i = 0; i < count; ++i) {
        people[i]->display();
    }
}

void searchById(Person* people[], int count) {
    if (count == 0) {
        cout << "No people to search." << endl;
        return;
    }
    int id;
    cout << "Enter Person ID to search: ";
    cin >> id;
    cin.ignore(100, '\n');

    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (people[i]->getId() == id) {
            cout << "Person found:" << endl;
            people[i]->display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Person with ID " << id << " not found." << endl;
    }
}

void searchByName(Person* people[], int count) {
    if (count == 0) {
        cout << "No people to search." << endl;
        return;
    }
    char name[100];
    cout << "Enter name to search: ";
    cin.getline(name, 100);

    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (strcmp(people[i]->getName(), name) == 0) {
            if (!found) { // First match
                 cout << "Person(s) found with that name:" << endl;
            }
            people[i]->display();
            found = true;
        }
    }
    if (!found) {
        cout << "No person found with the name '" << name << "'." << endl;
    }
}

void modifyAddress(Person* people[], int count) {
     if (count == 0) {
        cout << "No people to modify." << endl;
        return;
    }
    int id;
    cout << "Enter Person ID to modify address: ";
    cin >> id;
    cin.ignore(100, '\n');

    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (people[i]->getId() == id) {
            people[i]->modifyAddress();
            cout << "Address updated successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Person with ID " << id << " not found." << endl;
    }
}


void findAddressById(Person* people[], int count) {
     if (count == 0) {
        cout << "No people to search." << endl;
        return;
    }
    int id;
    cout << "Enter Person ID to find address: ";
    cin >> id;
    cin.ignore(100, '\n');

    bool found = false;
    for (int i = 0; i < count; ++i) {
        if (people[i]->getId() == id) {
            cout << "Address for " << people[i]->getName() << " (ID: " << id << "):" << endl;
            people[i]->getAddress().display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Person with ID " << id << " not found." << endl;
    }
}

void displayByCity(Person* people[], int count) {
    if (count == 0) {
        cout << "No people to display." << endl;
        return;
    }
    char city[100];
    cout << "Enter city name to filter by: ";
    cin.getline(city, 100);

    bool found = false;
    cout << "\n--- People living in " << city << " ---" << endl;
    for (int i = 0; i < count; ++i) {
        if (strcmp(people[i]->getAddress().getCity(), city) == 0) {
            people[i]->display();
            found = true;
        }
    }
    if (!found) {
        cout << "No people found living in '" << city << "'." << endl;
    }
}

