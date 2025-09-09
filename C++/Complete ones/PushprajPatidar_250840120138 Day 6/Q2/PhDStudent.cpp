#include "PhDStudent.h"
#include <iostream>
#include <cstring>
using namespace std;

char *PhDStudent::dup_cstr2(const char *s)
{
  if (!s)
    return nullptr;
  size_t n = std::strlen(s);
  char *p = new char[n + 1];
  std::strcpy(p, s);
  return p;
}

PhDStudent::PhDStudent()
    : Student(), thesisName(nullptr), thesisMarks(0.0)
{
  setDegree("PhD");
  setThesisName("Untitled");
}

PhDStudent::PhDStudent(int id, const char *name, const char *address, double passPct, double m1, double m2, double m3, const char *thesis, double thesisMarks_, const char *degree) : Student(id, name, address, passPct, m1, m2, m3, degree), thesisName(dup_cstr2(thesis)), thesisMarks(thesisMarks_) {}

PhDStudent::~PhDStudent()
{
  if (thesisName)
    delete[] thesisName;
}

void PhDStudent::setThesisName(const char *t)
{
  delete[] thesisName;
  thesisName = dup_cstr2(t);
}

void PhDStudent::setThesisMarks(double v) { thesisMarks = v; }
const char *PhDStudent::getThesisName() const { return thesisName ? thesisName : "NA"; }
double PhDStudent::getThesisMarks() const { return thesisMarks; }

double PhDStudent::computeOverallPercentage() const
{
  return (getM1() + getM2() + getM3() + thesisMarks) / 4.0;
}

void PhDStudent::display() const
{
  cout << "PhDStudent[id=" << getId()
       << ", name=" << getName()
       << ", address=" << getAddress()
       << ", degree=" << getDegree()
       << ", m1=" << getM1()
       << ", m2=" << getM2()
       << ", m3=" << getM3()
       << ", thesisName=" << getThesisName()
       << ", thesisMarks=" << thesisMarks
       << ", overall=" << computeOverallPercentage()
       << ", pass=" << (isPass() ? "YES" : "NO")
       << "]\n";
}
