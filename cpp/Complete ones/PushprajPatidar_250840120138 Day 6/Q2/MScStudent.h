#ifndef MSCSTUDENT_H
#define MSCSTUDENT_H

#include "Student.h"

class MScStudent : public Student
{
private:
  double specialSubjectMarks;
  double languageMarks;

public:
  MScStudent();
  MScStudent(int id, const char *name, const char *address, double passPct, double m1, double m2, double m3, double special, double language, const char *degree);
  virtual ~MScStudent();

  void setSpecialSubjectMarks(double v);
  void setLanguageMarks(double v);
  double getSpecialSubjectMarks() const;
  double getLanguageMarks() const;

  double computeOverallPercentage() const override;
  void display() const override;
};

#endif