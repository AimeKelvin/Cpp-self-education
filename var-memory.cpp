#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* a_memory = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a: " << a << endl;
}