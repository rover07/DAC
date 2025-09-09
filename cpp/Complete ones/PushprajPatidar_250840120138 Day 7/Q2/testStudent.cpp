#include "phdStudent.h"
#include "mscStudent.h"
 #include "student.h"
 #include "studentService.h"

int main(){

 
    int chc;

    do{     
        cout <<"1. Add new Students" << endl; 
        cout <<"2. Display All Students"<< endl;
        cout <<"3. Search by Id"<< endl;
        cout <<"4. Search by Name"<< endl;
        cout <<"5. Sort Students by m1 marks"<<endl;
        cout <<"6. Display All MSC Student\n";
        cout <<"7. Display All PHD Student\n";
        cout <<"8. Exit"<<endl;
        
        cout << "Enter your choice: "<<endl;
        cin>>chc;

        switch (chc){

            case 1:
                StudentService::AddStudent();
                break;
            case 2 :
                StudentService::displayStudents();
                break;
            
            case 3 :
                int id;   
                cout << "Enter the id that need to be searched \n"; 
                cin >> id; 
                StudentService::searchById(id);
                break;
               
            case 4 :
                char name[50];   
                cout << "Enter the fname that need to be searched \n"; 
                cin >> name;
                StudentService::searchByName(name);
                break;
               
            case 5 :
               StudentService::sortByM1marks();
               break; 
                 
            case 6 :
               StudentService::displayMsc();
               break;
               
            case 7 :
               StudentService::displayPhd();
               break;

            default:
                cout<<"Exit"<<endl;
                break;
        }
        
    }while(chc<8);

    StudentService::cleanup();
    return 0;
}
