
#include "Employee.h"


class SalariedEmp:public Employee{
   private:
      double sal;
      double bonus;
      
   public:
      SalariedEmp();
      SalariedEmp(int eno,const char* nm,const char *dt,const char* ds,double s);
      ~SalariedEmp();
      void setSalary(double s);
      double getBonus()  const;
      double getSalary() const;
      void display();


};

//SalariedEmp ob(12,"Rajan","design""gamedesigner",2345)
