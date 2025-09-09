#ifndef TEST_SERVICES_H
#define TEST_SERVICES_H

#include "Person.h"


void addNewPerson(Person* people[], int& count, int maxSize);
void displayAll(Person* people[], int count);
void searchById(Person* people[], int count);
void searchByName(Person* people[], int count);
void modifyAddress(Person* people[], int count);
void findAddressById(Person* people[], int count);
void displayByCity(Person* people[], int count);

#endif 

