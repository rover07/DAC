#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

const int passingMarks =30;
class Student{

    private:
    int id ,m1,m2,m3;
    char *name,*address,*degree;

    public :

    Student();

    Student(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr,const char* degr);

    virtual void display();

    int getid();
   
    char* getName();
    

};
#endif
