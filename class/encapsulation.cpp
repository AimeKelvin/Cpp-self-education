#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      if(s < 0) {
        cout << "Salary cannot be negative." << endl;
      } else {
        salary = s;
      }
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(-50000);
  cout << myObj.getSalary() << endl;
  return 0;
}