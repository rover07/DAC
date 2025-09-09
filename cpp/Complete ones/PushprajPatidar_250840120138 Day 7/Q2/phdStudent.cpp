#include "phdStudent.h"
#include <cstring>

phdStudent::phdStudent(){
    this->thesis_name = nullptr;
    this->thesis_marks = 0;

}

phdStudent::phdStudent(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr,const char* degr,const char* thesis,int marks_thesis):Student(empid,marks1,marks2,marks3,nm,addr,degr){
    this->thesis_marks = marks_thesis;
    thesis_name=new char[strlen(thesis)+1];
    strcpy(this->thesis_name,thesis);

}

void phdStudent::display(){
    Student::display();
    cout<<"Thesis :"<<thesis_name<<"\n Marks of the thesis"<<thesis_marks<<endl<<endl;

}

phdStudent::~phdStudent() {
    delete[] thesis_name;
}




