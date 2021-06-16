#include <iostream>
#include <string>
using namespace std;

class customers{
    string fname;
    int age;

    public:
    //constructor definition
        customers(string a, int b){
            fname = a;
            age = b;
            cout<<"name: "<<a<<endl<<"age: "<<b<<endl;
        }
}; 

int main(){
    customers customer1("Gift", 15);
    customers customer2("Rosalia", 10);
    return 0;
}