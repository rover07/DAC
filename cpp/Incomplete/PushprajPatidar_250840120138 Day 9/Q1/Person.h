#ifndef PERSON_H
#define PERSON_H

#include "Address.h"

class Person {
private:
    int id;
    char* name;
    Address addr; // we made HAS-A relationship here

    static int count;

public:
    Person();
    
    Person(const char* n, const Address& a);

    void accept();

    void display() const;
    
    void modifyAddress();

    int getId() const;
    const char* getName() const;
    const Address& getAddress() const;

    ~Person();
};

#endif 

