#include "ContractEmp.h"
#include<iostream>
using namespace std;

ContractEmp::ContractEmp():hours(0.0),charges(0.0){
  cout<<"in default constructor of ContractEmp";
  //sal=0.0
  //bonus=0.0;
  }

    ContractEmp::ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double h,double ch):Employee(eno,nm,dt,ds){
	cout<<"in parametrised constructor of ContractEmp"<<endl;
	  hours=h;
	  charges=ch;
  }
	
  ContractEmp::~ContractEmp(){
	   cout<<"in ContractEmp destructor"<<endl;
  }

		
	void ContractEmp::setHours(double h) {
		hours = h;
	}

	void ContractEmp::setCharges(double ch) {
		charges = ch;
	}

	double ContractEmp::getHours() const {
		return hours;
	}

	double ContractEmp::getCharges() const {
		return charges;
	}

	double ContractEmp::calculateSalary() const {
		return hours * charges;
	}
	
  void ContractEmp::display(){
     Employee::display();
     cout<<"Hours: "<<hours<<" ";
     cout<<"Charges: " <<charges<<endl;
     cout<<"Total Salary: " <<calculateSalary()<<endl;
  }

