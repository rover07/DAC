/*
2. Write a program to maintain student information. For each student
 store studid, name, m1, m2 and m3
 (marks of 3 subjects, use array of int to store marks ).
 Accept information for 2 students and display it as follows.

Student Details:
____________
Student Id-->11
Name: Divya
M1 :    78
M2:     86
M3:     89
*/

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
	int studid;
	char name[50];
	int marks[3];

public:
	Student()
	{
		studid = 0;
		name[0] = '\0';
	}
	Student(int studid, const char *name, const int *marks)
	{
		this->studid = studid;
		strncpy(this->name, name, sizeof(name) - 1);
		this->name[sizeof(name) - 1] = '\0';
		for (int i = 0; i < sizeof(this->marks) / sizeof(int); i++)
		{
			this->marks[i] = marks[i];
		}
	}

	void display()
	{
		cout << "Student Id -->" << studid << endl;
		cout << "Name: " << name << endl;
		for (int i = 0; i < sizeof(marks) / sizeof(int); i++)
		{
			cout << "M" << i + 1 << ": " << marks[i] << endl;
		}
	}
};

void addStudentDetails(int &studid, char *name, int *arr, int size)
{
	cout << "Enter student id: ";
	cin >> studid;
	cin.ignore();
	cout << "Enter student name: ";
	cin.getline(name, 49);

	cout << "Enter student marks" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter mark of subject " << i + 1 << endl;
		cin >> arr[i];
	}
}

int main()
{

	int studid;
	char name[50];
	int arr[3];
	int size = sizeof(arr) / sizeof(int);

	addStudentDetails(studid, name, arr, size);

	Student s1(studid, name, arr);
	s1.display();

	return 0;
}
