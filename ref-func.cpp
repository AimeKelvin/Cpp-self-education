#include <iostream>
using namespace std;


void xvar(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}


int main(){
int n = 200;
int m = 320;
cout << n << " "<< m<<"\n";
    xvar(n,m);
cout << n;
}