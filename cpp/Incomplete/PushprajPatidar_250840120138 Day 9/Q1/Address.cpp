#include "Address.h"
#include <iostream>
#include <cstring> 

using namespace std;

Address::Address() : street(nullptr), city(nullptr), state(nullptr), pin(0) {}


Address::Address(const char* s, const char* c, const char* st, int p) : pin(p) {
    street = new char[strlen(s) + 1];
    strcpy(street, s);

    city = new char[strlen(c) + 1];
    strcpy(city, c);

    state = new char[strlen(st) + 1];
    strcpy(state, st);
}

// deep copying
Address::Address(const Address& other) : pin(other.pin) {
    street = new char[strlen(other.street) + 1];
    strcpy(street, other.street);

    city = new char[strlen(other.city) + 1];
    strcpy(city, other.city);

    state = new char[strlen(other.state) + 1];
    strcpy(state, other.state);
}





void Address::accept() {
    // Temporary buffer to read input
    char temp[100];


    delete[] street;
    delete[] city;
    delete[] state;

    cout << "Enter Street: ";
    cin.getline(temp, 100);
    street = new char[strlen(temp) + 1];
    strcpy(street, temp);

    cout << "Enter City: ";
    cin.getline(temp, 100);
    city = new char[strlen(temp) + 1];
    strcpy(city, temp);

    cout << "Enter State: ";
    cin.getline(temp, 100);
    state = new char[strlen(temp) + 1];
    strcpy(state, temp);

    cout << "Enter Pin Code: ";
    cin >> pin;
    cin.ignore(); 
}


void Address::display() const {
    cout << "    Street: " << (street ? street : "N/A") << endl;
    cout << "    City: " << (city ? city : "N/A") << endl;
    cout << "    State: " << (state ? state : "N/A") << endl;
    cout << "    Pin Code: " << pin << endl;
}


const char* Address::getCity() const {
    return city;
}


Address::~Address() {
    delete[] street;
    delete[] city;
    delete[] state;
}

