#include "SalariedEmp.h"
#include<iostream>
using namespace std;

SalariedEmp::SalariedEmp():Sal(0.0),Bonus(0.0){
cout<<"in default constructor of SalariedEmp";
  //Sal=0.0
  //Bonus=0.0;
}

SalariedEmp::SalariedEmp(int eno,const char* nm,const char *dt,const char* ds,double s):Employee(eno,nm,dt,ds){
cout<<"in parametrised constructor of SalariedEmp";
  Sal=s;
  Bonus=s*0.10;
}
SalariedEmp::~SalariedEmp(){
   cout<<"in salariedemp destructor";
}

void SalariedEmp::display(){
     Employee::display();
     cout<<"Salary: "<<Sal;
     cout<<"bonus: " <<Bonus<<endl;

}

