#include "phdStudent.h"
#include "mscStudent.h"
 #include "student.h"
 #include "studentService.h"

//  Student(int empid,int marks1,int marks2 ,int marks3,char* nm,char* addr,char* degr);
// MscStudent ::MscStudent(int empid,int marks1,int marks2 ,int marks3,char* nm,char* addr,char* degr,int spsub,int lang)
// phdStudent::phdStudent(int empid,int marks1,int marks2 ,int marks3,char* nm,char* addr,char* degr,char* thesis,int marks_thesis)
int main(){

    // Student ob(11,21,23,45,"Rajan","america","btech");
    // ob.display();

    // Student *ob2=new Student(1,23,45,65,"Revati","India ","btech");
    // ob2->display();
    // delete ob2;

//     //for msc Student 
//   MscStudent ob3(2,45,65,45,"Ansh","India","Btech cse",20,45);
//    ob3.display();
  
//   MscStudent *ob4=new MscStudent(3,34,35,35,"Atharva","India","bca",50,50);
//   ob4->display();

//   //for phd student

//   phdStudent ob5(4,34,45,67,"khushi","India","fashion","stitch",34);
//   ob5.display();

//   phdStudent *ob6 = new phdStudent(5,45,12,14,"Abhijeet","India","btech","IB",45);
//   ob6->display();
//     static void displayStudents(); 
//     static void searchById(char *iD); 
//     static void searchByName(char *nm); 
//     static void displayMsc(); 
//     static void displayPhd();



    int choice;

    do{
        cout << "------------------------------------Menu------------------------------------------" << endl; 
        cout <<"1. Add new Students" << endl; 
        cout << "2. Display All Students"<< endl;
        cout << "3. Search by Id"<< endl;
        cout << "4. Search by Name"<< endl;
        cout << "5. Exit"<<endl;
        
        cout << "enter your choice"<<endl;
        cin>>choice;

        switch (choice){

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

            default:
                cout<<"--------------------Thankyou------------------------------"<<endl;
                break;
        }
        
    }while(choice!=5);



}