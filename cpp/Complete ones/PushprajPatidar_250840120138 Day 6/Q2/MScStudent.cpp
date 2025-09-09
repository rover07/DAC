#include "MScStudent.h"
#include <iostream>
using namespace std;

MScStudent::MScStudent()
    : Student(), specialSubjectMarks(0.0), languageMarks(0.0)
{
  setDegree("MSc");
}

MScStudent::MScStudent(int id, const char *name, const char *address, double passPct, double m1, double m2, double m3, double special, double language, const char *degree) : Student(id, name, address, passPct, m1, m2, m3, degree), specialSubjectMarks(special), languageMarks(language) {}

MScStudent::~MScStudent()
{
}

void MScStudent::setSpecialSubjectMarks(double v) { specialSubjectMarks = v; }
void MScStudent::setLanguageMarks(double v) { languageMarks = v; }
double MScStudent::getSpecialSubjectMarks() const { return specialSubjectMarks; }
double MScStudent::getLanguageMarks() const { return languageMarks; }

double MScStudent::computeOverallPercentage() const
{
  return (getM1() + getM2() + getM3() + specialSubjectMarks + languageMarks) / 5.0;
}

void MScStudent::display() const
{
  cout << "MScStudent[id=" << getId()
       << ", name=" << getName()
       << ", address=" << getAddress()
       << ", degree=" << getDegree()
       << ", m1=" << getM1()
       << ", m2=" << getM2()
       << ", m3=" << getM3()
       << ", special=" << specialSubjectMarks
       << ", language=" << languageMarks
       << ", overall=" << computeOverallPercentage()
       << ", pass=" << (isPass() ? "YES" : "NO")
       << "]\n";
}
