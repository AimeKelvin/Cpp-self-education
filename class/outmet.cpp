#include <iostream>
using namespace std;

class Student {       // The class
  public:             // Access specifier
    int age;        // Attribute (int variable)
    string name;

    Student(int a, string n){
      age = a;
      name = n;
    }
      // Attribute (string variable)
};


int main(){
Student p1(15,"Shimwa");

  cout <<p1.age << "\n";
  cout << p1.name<< "\n";
  return 0;
}