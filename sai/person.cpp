#include"person.h"
#include<iostream>
using namespace std;
 person::person(int id,char*name,char*addr){
 this->id=id;
 name= new char[sizeof(name-1)];
 strcpy(this->name=name);
 addr=new char[sizeof(addr-1)];
 strcpy(this->addr=addr);
 }
void setid(int id){
this->id=id
}

void setname(char*name){
name=new char[sizeof(name)-1];
strcpy(this->name=name);
}

void set addr(char*addr){
addr=new char[sizeof(addr)-1];
strcpy(this->addr=addr);
}


int getid(int id){
cout<<id};

char getname(char*name){
cout<<name}

char getaddr(char *addr){
cout<<addr}
 
