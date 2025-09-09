/*
Refer inheritancedemo shared with you and do the trial for the following



	1. Run the program and note the output
	
	2. Add ContractEmp.h and ContractEmp.cpp file, 

	add following code in main function, test ContractEmp class working correctly  
	   ContractEmp ob(11,"Varsha","HR","Programmer",34,2456);
	   ob.display()
	   ContractEmp *cemp=new ContractEmp(12,"Sonali","Admin","mgr",45,1443);
	   cemp->display();
	   Employee *emp2=new ContractEmp(13,"Rama","Admin","mgr",5,1678);
	   emp2->display();
	   
	3. change display function and destructor declaration in Employee.h file
		virtual void display();
		virtual ~Employee();#ifndef EMPLOYEE_H
#define EMPLOYEE_H
		Run main method and check is there any change in the output. make a note of it.
	
*/



#include<iostream>
//#include "Employee.h"
#include "SalariedEmp.h"
#include "ContractEmp.h"

int main(){
  Employee ob(10,"Rajan","Hr","mgr");
  ob.display();
  Employee* emp=new Employee(11,"Revati","design","UXDesigner");
  emp->display();
  
  SalariedEmp semp(10,"Rajan","Hr","mgr",2345);
  semp.display();
  
  SalariedEmp *semp1=new SalariedEmp(10,"Atharva","admin","CEO",55555);
  semp1->display();
  
 Employee* emp1=new SalariedEmp(11,"Ajay","admin","CEO",55555);
  emp1->display();
  
  
  ContractEmp obj(11,"Varsha","HR","Programmer",34,2456);
  obj.display();
  
  ContractEmp *cemp=new ContractEmp(12,"Sonali","Admin","mgr",45,1443);
  cemp->display();
  
  Employee *emp2=new ContractEmp(13,"Rama","Admin","mgr",5,1678);
  emp2->display();
	   
}
