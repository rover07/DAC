#include "mscStudent.h"

//default
MscStudent ::MscStudent(){
    Marks_SpSub =0;
    Marks_Lang =0;
}

//for the parent class we dont use the * we jst write the name 
MscStudent ::MscStudent(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr,
    const char* degr,int spsub,int lang):Student(empid,marks1,marks2,marks3,nm,addr,degr){
    this->Marks_SpSub=spsub;
    this->Marks_Lang = lang;
}

void MscStudent ::display(){
    Student::display();
    cout<<"marks in Special Subject :"<<Marks_SpSub<<"\nmarks in language :"<<Marks_Lang<<endl;
}

