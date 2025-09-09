#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

char *Student::dup_cstr(const char *s)
{
  if (!s)
    return nullptr;
  size_t n = std::strlen(s);
  char *p = new char[n + 1];
  std::strcpy(p, s);
  return p;
}

Student::Student()
    : id(0), name(nullptr), address(nullptr),
      passingPercentage(40.0), m1(0.0), m2(0.0), m3(0.0),
      degree(nullptr) {}

Student::Student(int id_,
                 const char *name_,
                 const char *address_,
                 double passPct_,
                 double m1_, double m2_, double m3_,
                 const char *degree_)
    : id(id_), name(dup_cstr(name_)), address(dup_cstr(address_)),
      passingPercentage(passPct_), m1(m1_), m2(m2_), m3(m3_),
      degree(dup_cstr(degree_)) {}

Student::~Student()
{

  if (name)
    delete[] name;
  if (address)
    delete[] address;
  if (degree)
    delete[] degree;
  // no cout here to keep output clean; add if needed
}

void Student::setId(int v) { id = v; }
void Student::setName(const char *v)
{
  delete[] name;
  name = dup_cstr(v);
}
void Student::setAddress(const char *v)
{
  delete[] address;
  address = dup_cstr(v);
}
void Student::setPassingPercentage(double v) { passingPercentage = v; }
void Student::setM1(double v) { m1 = v; }
void Student::setM2(double v) { m2 = v; }
void Student::setM3(double v) { m3 = v; }
void Student::setDegree(const char *v)
{
  delete[] degree;
  degree = dup_cstr(v);
}

int Student::getId() const { return id; }
const char *Student::getName() const { return name ? name : "NA"; }
const char *Student::getAddress() const { return address ? address : "NA"; }
double Student::getPassingPercentage() const { return passingPercentage; }
double Student::getM1() const { return m1; }
double Student::getM2() const { return m2; }
double Student::getM3() const { return m3; }
const char *Student::getDegree() const { return degree ? degree : "NA"; }

double Student::computeOverallPercentage() const
{
  return (m1 + m2 + m3) / 3.0;
}

bool Student::isPass() const
{
  return computeOverallPercentage() >= passingPercentage;
}

void Student::display() const
{
  cout << "Student[id=" << id
       << ", name=" << getName()
       << ", address=" << getAddress()
       << ", degree=" << getDegree()
       << ", m1=" << m1
       << ", m2=" << m2
       << ", m3=" << m3
       << ", overall=" << computeOverallPercentage()
       << ", pass=" << (isPass() ? "YES" : "NO")
       << "]\n";
}
