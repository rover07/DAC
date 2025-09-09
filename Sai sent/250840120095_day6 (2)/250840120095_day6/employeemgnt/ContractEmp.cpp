#include"ContractEmp.h"
#include<iostream>

using namespace std;

ContractEmp::ContractEmp():Noofhours(0.0),Rateperhour(0.0){
        cout<<"in default constructor of SalariedEmp";
        //Noofhour=0.0
        //Rateofhour=0.0;
}

ContractEmp::ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double nhr,double rph):Employee(eno,nm,dt,ds){
cout<<"in parametrised constructor of ContractEmp";
  Noofhours=nhr;
  Rateperhour=rph;
}
ContractEmp::~ContractEmp(){
   cout<<"in contractemp destructor";
}

void ContractEmp::display(){
     Employee::display();
     cout<<"No_of_hours: "<<Noofhours;
     cout<<"Rate_per_hour: " <<Rateperhour<<endl;

}
