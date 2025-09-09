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
		cout << "default constructor" << endl;
		id = 0;
		age = 0;
		name[0] = '\0';
		address[0] = '\0';
	}
	Person(int id, int age, const char nm[], const char addr[])
	{
		cout << "in Parametrised constructor" << endl;
		this->id = id;
		this->age = age;
		strncpy(name, nm, sizeof(name) - 1);
		name[sizeof(name) - 1] = '\0';
		strncpy(address, addr, sizeof(address) - 1);
		address[sizeof(address) - 1] = '\0';
	}
	int getId() const { return id; }
	int getAge() const { return age; }
	const char *getName() const { return name; }
	const char *getAddress() const { return address; }

	void setAge(int age) { this->age = age; }
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

	void display() const
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
	static int count;

public:
	static void addPerson(const Person &p)
	{
		if (count < size)
			parr[count++] = p;
		else
			cout << "Array is full" << endl;
	}

	static void dispAll()
	{
		for (int i = 0; i < count; i++)
			parr[i].display();
	}
};

// ✅ static members defined outside
Person PersonService::parr[PersonService::size];
int PersonService::count = 0;

int main()
{
	Person p, p1(112, 24, "Aragorn", "Rivendell");
	p.display();
	p1.display();

	PersonService::addPerson(p1);
	PersonService::dispAll();

	return 0;
}
