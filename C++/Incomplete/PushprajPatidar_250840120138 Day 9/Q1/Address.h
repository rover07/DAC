#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

class Address {
private:
    char* street;
    char* city;
    char* state;
    int pin;

public:
    Address();

    Address(const char* s, const char* c, const char* st, int p);

    // deep copying done here
    Address(const Address& other);


    void accept();
    void display() const;
    const char* getCity() const;
 
    ~Address();
};

#endif

