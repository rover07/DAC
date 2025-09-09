#include"Employee.h"


class ContractEmp:public Employee{
   private:
      double Noofhours;
      double Rateperhour;
      
   public:
      ContractEmp();
      ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double nhr,double rph);
      ~ContractEmp();
      void setNoofhours(double nhr);
      void setRateperhour(double rph);
      double getNoofhours();
      double getRateperhour();
      void display();


};

