#include "student.h"

class StudentService {

    private:
        static Student* sArr[100]; 
        static int count; 

    public:
    static void AddStudent();
    static void displayStudents(); 
    static void searchById(int iD); 
    static void searchByName(char *nm); 
    static void sortByM1marks();
    static void displayMsc(); 
    static void displayPhd();
    static void cleanup();
        
};
