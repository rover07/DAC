#include "student.h"
#include "phdStudent.h"
#include "mscStudent.h"
#include "studentService.h"
#include <cstring>

int StudentService::count = 0; 
Student* StudentService::sArr[100];
// static void AddStudent();
//     static void displayStudents(); 
//     static void searchById(char *iD); 
//     static void searchByName(char *nm); 
//     static void displayMsc(); 
//     static void displayPhd();

void StudentService::AddStudent(){
    int choice;
    if(count>100){
        cout<< " the array is full"<<endl;
    }
    else{
        cout << "Enter the type of student "<<"\n 1 . Msc Student"<<"\n 2. phd Student"<<endl;
        cin>>choice;
         int empid,marks1,marks2,marks3,spsub,lang,marks_thesis;
             char nm[50],addr[100],degr[40],thesis[30];
         
        switch(choice){
           
            case 1 :   
                cout << "Enter id \t marks1 \t marks2 \t marks3 \t nm \t addr \t degr \t spsub \t lang"<<endl; 
                 cin >> empid >> marks1 >> marks2>> marks3>>nm>>addr>>degr>>spsub>>lang; 
             sArr[count] = new MscStudent( empid, marks1, marks2 , marks3, nm, addr, degr, spsub, lang);
             break;

            case 2 :
            cout << "Enter id \t marks1 \t marks2 \t marks3 \t nm \t addr \t degr \t thesis \t thesis_name"<<endl;
                 cin >> empid >> marks1 >> marks2>> marks3>>nm>>addr>>degr>>thesis>>marks_thesis; 
             sArr[count] = new phdStudent( empid, marks1, marks2 , marks3, nm, addr, degr, thesis,marks_thesis);
             break;

            default :
                cout<< "enter the correct choice"<<endl;
                break;

        }
        sArr[count]->display(); 
        count++;
    }

}
void StudentService::displayStudents (){

    for(int i =0; i<100;i++){
        sArr[i]->display();
    }

} 

void StudentService::searchById( int iD){

    for (int i=0; i<100; i++){
        if(sArr[i]->getid()== iD) {
            sArr[i]->display();
            return; 
        }
    }
    cout << "The account is not found with " << iD << endl;
}

void StudentService::searchByName(char *nm){

    for(int i =0;i<100;i++){
        if (strcmp(sArr[i]->getName(),nm)==0)
        {
           sArr[i]->display();
           return;
        }
        
    }
     cout << "The account is not found with " << nm << endl;
}


void StudentService :: displayMsc(){
     for (int i=0; i<100; i++){
        if(dynamic_cast<MscStudent*>(sArr[i])){
            sArr[i] ->display(); 
        }
    }
}
void StudentService :: displayPhd(){
     for (int i=0; i<100; i++){
        if(dynamic_cast<phdStudent*>(sArr[i])){
            sArr[i] ->display(); 
        }
    }
}

