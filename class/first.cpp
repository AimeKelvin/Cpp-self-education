#include <iostream>
using namespace std;

class Student {       // The class
  public:             // Access specifier
    int id;        // Attribute (int variable)
    string name;  // Attribute (string variable)
};

int main(){
Student student1;

student1.id=1;
student1.name="Aime Kelvin";

  cout << student1.id << "\n";
  cout << student1.name<< "\n";
  return 0;
}