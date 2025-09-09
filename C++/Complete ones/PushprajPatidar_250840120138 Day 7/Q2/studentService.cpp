#include "student.h"
#include "phdStudent.h"
#include "mscStudent.h"
#include "studentService.h"
#include <cstring>

int StudentService::count = 0; 
Student* StudentService::sArr[100];


void StudentService::AddStudent(){
    int choice;
    if(count>=100){
        cout<< "The array is full"<<endl;
    }
    else{
        cout << "Enter the type of student "<<"\n 1. Msc Student"<<"\n 2. Phd Student"<<endl;
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
                 cout << "Enter id \t marks1 \t marks2 \t marks3 \t nm \t addr \t degr \t thesis name \t thesis marks"<<endl;
                 cin >> empid >> marks1 >> marks2>> marks3>>nm>>addr>>degr>>thesis>>marks_thesis; 
                 sArr[count] = new phdStudent( empid, marks1, marks2 , marks3, nm, addr, degr, thesis, marks_thesis);
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

    for(int i =0; i<count;i++){
        sArr[i]->display();
    }

} 

void StudentService::searchById( int iD){
    for (int i=0; i<count; i++){
        if(sArr[i]->getid()== iD) {
            sArr[i]->display();
            return; 
        }
    }
    cout << "The account is not found with " << iD << endl;
}

void StudentService::searchByName(char *nm){

    for(int i =0;i<count;i++){
        if (strcmp(sArr[i]->getName(),nm)==0)
        {
           sArr[i]->display();
           return;
        }
        
    }
     cout << "The account is not found with " << nm << endl;
}

void StudentService::sortByM1marks(){
	  	int j;
        Student* key;
        for(int i=1;i<count;i++){
          key=sArr[i];
          j=i-1;
          while(j>=0 && sArr[j]->getM1() < key->getM1()){
            sArr[j+1]=sArr[j];
            j--;
          }
          sArr[j+1]=key;
    	}
      	cout<<"The array of objects (The list of students) is sorted in non-increasing order of m1 marks."<<endl;
}



void StudentService :: displayMsc(){
     for (int i=0; i<count; i++){
        if(dynamic_cast<MscStudent*>(sArr[i])){
            sArr[i]->display(); 
        }
    }
}
void StudentService :: displayPhd(){
     for (int i=0; i<count; i++){
        if(dynamic_cast<phdStudent*>(sArr[i])){
            sArr[i]->display(); 
        }
    }
}

void StudentService::cleanup() {
    for (int i = 0; i < count; i++) {
        delete sArr[i];
        sArr[i] = nullptr;
    }
    count = 0;
}

