#include "SalariedEmp.h"
#include<iostream>
using namespace std;

SalariedEmp::SalariedEmp():sal(0.0),bonus(0.0){
  cout<<"in default constructor of SalariedEmp";
  //sal=0.0
  //bonus=0.0;
  }

  SalariedEmp::SalariedEmp(int eno,const char* nm,const char *dt,const char* ds,double s):Employee(eno,nm,dt,ds){
	cout<<"in parametrised constructor of SalariedEmp"<<endl;
	  sal=s;
	  bonus=sal*0.10;
  }
	
  SalariedEmp::~SalariedEmp(){
	   cout<<"in salariedemp destructor"<<endl;
  }

	void SalariedEmp::setSalary(double s) {
		sal = s;
		bonus = 0.10 * sal;
	}

	double SalariedEmp::getSalary() const {
		return sal;
	}

	double SalariedEmp::getBonus() const {
		return bonus;
	}

  void SalariedEmp::display(){
     Employee::display();
     cout<<"Salary: "<<sal<<" ";
     cout<<"bonus: " <<bonus<<endl;
  }

