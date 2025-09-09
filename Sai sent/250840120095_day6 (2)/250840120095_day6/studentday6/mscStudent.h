#include "student.h"


class MscStudent : public Student{

    private:
    int Marks_SpSub ,Marks_Lang;

    public:
    MscStudent();

    MscStudent(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr,const char* degr,int spsub,int lang);

   void  display();





};