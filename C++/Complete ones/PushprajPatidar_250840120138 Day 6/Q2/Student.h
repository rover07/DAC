#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
  int id;
  char *name;
  char *address;
  double passingPercentage;
  double m1, m2, m3;
  char *degree;

   static char *dup_cstr(const char *s);

public:
  Student();
  Student(int id,
          const char *name,
          const char *address,
          double passPct,
          double m1, double m2, double m3,
          const char *degree);

  virtual ~Student();

  void setId(int v);
  void setName(const char *v);
  void setAddress(const char *v);
  void setPassingPercentage(double v);
  void setM1(double v);
  void setM2(double v);
  void setM3(double v);
  void setDegree(const char *v);

  int getId() const;
  const char *getName() const;
  const char *getAddress() const;
  double getPassingPercentage() const;
  double getM1() const;
  double getM2() const;
  double getM3() const;
  const char *getDegree() const;

  virtual double computeOverallPercentage() const;
  virtual bool isPass() const;
  virtual void display() const;
};

#endif