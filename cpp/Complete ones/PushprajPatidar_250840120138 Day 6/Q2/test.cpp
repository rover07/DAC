#include <iostream>
#include "Student.h"
#include "MScStudent.h"
#include "PhDStudent.h"
using namespace std;

int main()
{
  // Stack objects (direct calls)
  Student base(10, "Rajan", "Campus", 40.0, 70, 65, 80, "General");
  base.display();

  MScStudent msc(11, "Atharva", "Admin Block", 40.0, 78, 82, 69, 88, 74, "MSc CS");
  msc.display();

  PhDStudent phd(12, "Varsha", "Research Wing", 50.0, 72, 65, 80, "DL for Vision", 85, "PhD Engg");
  phd.display();

  // Dynamic polymorphism via base pointers
  Student *s1 = new MScStudent(21, "Ajay", "Hostel", 40.0, 60, 70, 75, 80, 85, "MSc Math");
  Student *s2 = new PhDStudent(22, "Sonali", "Lab", 50.0, 81, 77, 73, "NLP Thesis", 79, "PhD CS");

  s1->display();
  s2->display();

  if (MScStudent *pm = dynamic_cast<MScStudent *>(s1))
  {
    pm->setLanguageMarks(90.0);
    pm->display();
  }

  if (PhDStudent *pp = dynamic_cast<PhDStudent *>(s2))
  {
    pp->setThesisMarks(60.0);
    pp->display();
  }

  delete s1;
  delete s2;

  return 0;
}
