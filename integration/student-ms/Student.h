#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>

using namespace std;

class Student{
private:
int id;
string name;

public:
void setStudent(int i, string n);
string getStudent();
};

#endif