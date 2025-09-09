#include "student.h"

class phdStudent: public Student{
    private:
        char *thesis_name; 
        int thesis_marks; 
    
    public: 
        phdStudent(); 
        phdStudent(int empid,int marks1,int marks2 ,int marks3,const char* nm,const char* addr, const char* degr,const char* thesis,int marks_thesis); 
        void display(); 
        ~phdStudent();
}; 
