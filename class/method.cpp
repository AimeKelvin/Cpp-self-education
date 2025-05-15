#include <iostream>
using namespace std;

class School{
    public:
    string city;
    int students;

    void hey(){
        cout << "Hello from the school in " << city << endl;
    }
};

int main(){
    School sos_ts;
    sos_ts.city = "Kigali";
    sos_ts.students = 12000;
    sos_ts.hey();
}