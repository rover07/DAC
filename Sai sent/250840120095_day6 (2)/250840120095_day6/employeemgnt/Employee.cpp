#include<iostream>
#include<cstring>
using namespace std;
#include "Employee.h"

//initialize static variable
int Employee::totalleaves=0;

//default constructor
Employee::Employee(){
  cout<<"in employee default constructor"; 
  empno=0;
  name=nullptr;
  dept=nullptr;
  desg=nullptr;
}

//parametrised constructor
Employee::Employee(int empno,const char* nm, const char*dt, const char* ds){
    cout<<"in employee parametrised constructor"; 
    this->empno=empno;
    name=new char[strlen(nm)+1];
    strcpy(this->name,nm);
    dept=new char[strlen(dt)+1];
    strcpy(this->dept,dt);
    desg=new char[strlen(ds)+1];
    strcpy(this->desg,ds);

}

Employee::~Employee(){
   cout<<"in employee destructor";
   if(name)
    delete[] name;
   if(dept)
    delete[] dept;
   if(desg)
    delete[] desg;
}

inline void Employee::setEmpno(int id){
    this->empno=id;
}

inline void Employee::setName(const char *nm){
   delete[] name;
   name=new char[strlen(nm)+1];
   strcpy(name,nm);
}

void Employee::setDept(const char *dt){
   delete[] dept;
   dept=new char[strlen(dt)+1];
   strcpy(dept,dt);
}

void Employee::setDesg(const char *ds){
   delete[] desg;
   desg=new char[strlen(ds)+1];
   strcpy(desg,ds);
}
//getter methods
inline int Employee::getEmpno(){return empno;}
inline const char* Employee::getName(){return name;}
inline const char* Employee::getDept(){return dept;}
inline const char* Employee::getDesg(){return desg;}
void Employee::display(){
     cout<<"Empno : "<<empno<<" Name: "<<(name?name:"not avaialble")<<" Department: "<<dept;
     cout<<"Designamtion : "<<desg<<endl;   
}






