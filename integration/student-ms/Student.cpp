// Student.cpp
#include "Student.h"
#include <string>
using namespace std;

// Constructor definition
void Student::setStudent(int i, string n) {
    id = i;
    name = n;
}

string Student::getStudent(){
    return name;
}

