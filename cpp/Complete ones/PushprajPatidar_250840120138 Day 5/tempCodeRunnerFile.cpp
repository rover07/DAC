/* Day 5 Assignment
Q1.
1. write a menu driven program to perform following tasks
1. Add person"<<endl;
2. Search by id"<<endl;
3. display all"<<endl;
4. Search by name"<<endl;
5. sort by id"<<endl;
6. sort by name"<<endl;
7. modify address by id"<<endl;
8. exit

store array of person objects in PersonService class,
for each menu option create static method in PersonService class
*/
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	int id, age;
	char name[100];
	char address[100];

public:
	Person()
	{
		// default constructor
		cout << "default constructor" << endl;
		id = 0;
		age = 0;
		name[0] = '\0';
		address[0] = '\0';
	}
	Person(int id, int age, char nm[], char addr[])
	{
		cout << "in Parametrised constructor" << endl;
		this->id = id;
		this->age = age;
		strncpy(name, nm, sizeof(name) - 1);
		name[sizeof(name) - 1] = '\0';
		strncpy(address, addr, sizeof(address) - 1); //?????? why size -1
		address[sizeof(address) - 1] = '\0';
	}
	int getId() const
	{
		return id;
	}
	int getAge() const
	{
		return age;
	}
	const char *getName() const
	{
		return name;
	}
	const char *getAddress() const
	{
		return address;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void setName(const char *nm)
	{
		strncpy(name, nm, sizeof(name) - 1);
		name[sizeof(name) - 1] = '\0';
	}
	void setAddr(const char *addr)
	{
		strncpy(address, addr, sizeof(address) - 1);
		address[sizeof(address) - 1] = '\0';
	}

	void display()
	{
		cout << "id " << id << endl;
		cout << "Age " << age << endl;
		cout << "Name " << name << endl;
		cout << "Address " << address << endl;
	}
};

class PersonService
{
	static const int size = 10;
	static Person parr[size];
	static int count = 0;

public:
	static void addPerson()
	{
		if (count < 10)
		{
			parr[count] = p;
		}
		else
			cout << "Array is full";
	}

	dispAll()
	{
		for (int i = 0; i < size; i++)
		{
			parr[i].disp();
		}
	}
};

int main()
{
	// PersonService person[10];
	Person p, p1(112, 24, "Aragorn", "Rivendel");
	p.display();
	p1.display();
	return 0;
}
