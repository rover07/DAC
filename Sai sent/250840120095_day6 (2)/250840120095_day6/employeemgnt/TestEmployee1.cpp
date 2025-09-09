#include<iostream>
#include"SalariedEmp.h"
#include"ContractEmp.h"


int main(){
        Employee ob(10,"Rajan","Hr","mgr");
        ob.display();
        
        Employee* emp=new Employee(11,"Revati","design","UXDesigner");
        ob.display();
        emp->display();

        SalariedEmp semp(10,"Rajan","Hr","mgr",2345);
        semp.display();

        SalariedEmp *semp1=new SalariedEmp(10,"Atharva","admin","CEO",55555);
        semp1->display();

        Employee* emp1=new SalariedEmp(11,"Ajay","admin","CEO",55555);
        emp1->display();
        
        ContractEmp ob1(11,"Varsha","HR","Programmer",34,2456);
        ob1.display();
        
        ContractEmp *cemp=new ContractEmp(12,"Sonali","Admin","mgr",45,1443);
        cemp->display();
        
        Employee *emp2=new ContractEmp(13,"Rama","Admin","mgr",5,1678);
        emp2->display();
}


