/* 
3.	Write a menu driven program to maintain student information.
 Modify  Student class created in previous assignment.  
 Add a member gpa in student class, add a function in student class to return GPA of a student
    calculateGPA()
      gpa=(1/3)*m1+(1/2)*m2+(1/4)*m3
Create an array to store Multiple students.


*/


#include<iostream>
#include<cstring>
using namespace std;

class Student{
	int studid;
	char name[50];
	int marks[3];
	float gpa;
	
	public:
	Student(){
		studid=0;
		name[0]='\0';
		gpa=0.0;
	}
	Student(int studid, const char* name, const int* marks){
		this->studid=studid;
		strncpy(this->name, name, sizeof(name)-1);
		this->name[sizeof(name)-1]='\0';
		for(int i=0; i<sizeof(this->marks)/sizeof(int); i++){
			this->marks[i]=marks[i];
		
		}
	}
	
	float calculateGPA(){
    	gpa=(((1.0/3.0)*marks[0])+((1.0/2.0)*marks[1])+((1.0/4.0)*marks[2]));
    	return gpa;
	}
	
	
 	void display(){
		cout<< "Student Id -->"<<studid<<endl;
		cout<< "Name: "<<name<<endl;
		for(int i=0; i<sizeof(marks)/sizeof(int); i++){
			cout<< "M"<<i+1<<": "<<marks[i]<<endl;
		}
	}
	
	const char* getName() const{
		return name;
	}
	
	int getId() const{
		return studid;
	}
};

void addStudentDetails(int &studid, char *name, int* arr, int size){
	cout<<"Enter student id: ";	
	cin>>studid;
	cin.ignore();
	cout<<"Enter student name: ";	
	cin.getline(name,49);
	
	
	cout<<"Enter student marks"<<endl;	
	for(int i=0; i<size; i++){
			cout<<"Enter mark of subject "<<i+1<<endl;
			cin>>arr[i];
	}
}



int main(){

	int studid;
	char name[50];
	int arr[3];
	int size=sizeof(arr)/sizeof(int);
	int choice;
	int count=0;
	Student starr[10];
//	int id;
	
	
	
	do{
		cout<<endl<<"1. Add new student"<<endl;
		cout<<"2. Display All Student"<<endl;
		cout<<"3. Search by id"<<endl;
		cout<<"4. Search by name"<<endl;
	//	cout<<"5. sort by m1 marks"<<endl;
		cout<<"5. calculate GPA of a student"<<endl;
		cout<<"6. Exit"<<endl;
		cout<<"Enter choice..";
		cin>>choice;
		
		switch(choice){
			case 1:
				addStudentDetails(studid, name, arr, size);	
				starr[count]=Student(studid, name, arr);
				count++;
				break;
			case 2:
				for(int i=0;i<count;i++){
					cout<<starr[i].getName()<<endl;
				}
				break;
			case 3:
				cout<<"Enter target id ";
				cin>>studid;
				for(int i=0;i<count;i++){
					if(studid==starr[i].getId()){
						cout<<"The student at with the target id is: "<<starr[i].getName()<<endl;
						break;
					}
					else if(i==count-1)
						cout<<"There is no student with such id number."<<endl; 
				}
				break;
			case 4:
				cin.ignore();
				cout<<"Enter student name: ";	
				cin.getline(name,49);
				for(int i=0;i<count;i++){
					if(strcmp(name, starr[i].getName())==0){
						cout<<"The Id of student with "<<name<<"is: "<<starr[i].getId()<<endl;
						break;
					}
					else if(i==count-1)
						cout<<"There is no such student"<<endl; 
				}
				break;
			case 5:
				cout<<"Enter student id to fetch gpa: ";
				cin>>studid;
				for(int i=0;i<count;i++){
					if(studid==starr[i].getId()){
						cout<<"The gpa of the student with the given id is: "<<starr[i].calculateGPA()<<endl;
						break;
					}
					else if(i==count-1)
						cout<<"There is no student with such id number."<<endl; 
				}
				break;
			default:
				break;
		}
	}while(choice<6);

	return 0;
}

