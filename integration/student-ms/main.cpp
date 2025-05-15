#include <iostream>
#include "Student.cpp"


int main(){
	Student student;
	student.setStudent(1, "Aime Kelvin");
    
    Student student2;
    student.setStudent(2, "Kwizera Caleb");

    Student student3;
    student.setStudent(2, "Umwali Christa");


	std::cout << student.getStudent() << std::endl;
}