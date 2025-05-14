#include <iostream>
using namespace std;

int main(){
    int var = 10;
    int* var_pointer = &var;
    cout << "Address of a: " << &var << endl;
    cout << "Value of a: " << *var_pointer << endl;
}