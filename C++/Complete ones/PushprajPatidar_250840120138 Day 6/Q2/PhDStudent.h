#ifndef PHDSTUDENT_H
#define PHDSTUDENT_H

#include "Student.h"

class PhDStudent : public Student
{
private:
  char *thesisName;
  double thesisMarks;

  static char *dup_cstr2(const char *s);

public:
  PhDStudent();
  PhDStudent(int id, const char *name, const char *address,
             double passPct, double m1, double m2, double m3,
             const char *thesis, double thesisMarks, const char *degree);
  virtual ~PhDStudent();

  void setThesisName(const char *t);
  void setThesisMarks(double v);
  const char *getThesisName() const;
  double getThesisMarks() const;

  double computeOverallPercentage() const override;
  void display() const override;
};

#endif