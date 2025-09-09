#include "student.h"
#include <cstring>


Student::Student(){
        this->id = 0;
        this->m1 =0;
        this->m2=0;
        this->m3=0;
        this->name =nullptr;
        this->address =nullptr;
        this->degree =nullptr;
}

Student::Student(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr,const char* degr){
    this->id= empid;
    this->m1= marks1;
    this->m2=marks2;
    this->m3=marks3;
    name=new char[strlen(nm)+1];
    strcpy(this->name,nm);
    address=new char[strlen(addr)+1];
    strcpy(this->address,addr);
    degree=new char[strlen(degr)+1];
    strcpy(this->degree,degr);

}

void Student::display(){
    cout<<"Id of the student: "<< id << "Name of the Student: "<< (name?name:"this Student doesnt exist") << "\nmarks in m1: " 

    <<m1<< "\nmarks in m2: "<<m2<<"\nmarks in m3: "<<m3<<"\naddress: "<<address<<endl;
}

int Student::getid(){
    return this->id;
}
char* Student::getName(){ 
    return name;
}

int Student::getM1(){
    return m1;
}
Student::~Student() {
    delete[] name;
    delete[] address;
    delete[] degree;
}

