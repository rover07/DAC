#include<iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

class Employee {

    private: 
            int empno;
            char* name;
            char* dept;
            char* desg;
            static int totalleaves;
    
    public: 
        //default constructor
        Employee(); 
        
        //parameterized constructor
        Employee(int eno, const char* nm, const char* dt, const char* ds);
        ~Employee();
        
        //setter methods
        
        void setEmpno(int id);
        void setName(const char* nm);
        void setDept(const char* dt);
        void setDesg(const char* ds);
        
        int getEmpno();
        const char* getName();
        const char* getDept();
        const char* getDesg();
        void display();
};
#endif
