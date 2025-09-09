#include "Person.h"
#include <iostream>
#include <cstring>

using namespace std;

int Person::count = 101;


Person::Person() : name(nullptr) {
    id = count++; 
}


Person::Person(const char* n, const Address& a) : addr(a) {
    id = count++; 
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}




void Person::accept() {
    char tempBuffer[100];


    delete[] name;

    cout << "\nEnter Name: ";
    cin.getline(tempBuffer, 100);
    name = new char[strlen(tempBuffer) + 1];
    strcpy(name, tempBuffer);


    addr.accept();
}


void Person::display() const {
    cout << "----------------------------------" << endl;
    cout << "Person ID: " << id << endl;
    cout << "Name: " << (name ? name : "N/A") << endl;
    cout << "Address: " << endl;
    addr.display();
    cout << "----------------------------------" << endl;
}

void Person::modifyAddress() {
    cout << "\nEnter new address details:" << endl;
    addr.accept();
}


int Person::getId() const {
    return id;
}

const char* Person::getName() const {
    return name;
}

const Address& Person::getAddress() const {
    return addr;
}


Person::~Person() {
    delete[] name;
}

