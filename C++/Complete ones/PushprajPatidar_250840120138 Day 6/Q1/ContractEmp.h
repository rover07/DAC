#include "Employee.h"

class ContractEmp:public Employee{
   private:
      double hours;
      double charges;
      
   public:
      ContractEmp();
      ContractEmp(int eno,const char* nm,const char *dt,const char* ds,double h, double ch);
      ~ContractEmp();
      
      void setHours(double h);
      void setCharges(double ch);
      double getHours() const;
      double getCharges() const;
      void display();
      double calculateSalary() const;
};
