#include <iostream>
using namespace std;

class customers{
    string fname;
    int age;

    public:
      customers(string a, int b);
};

customers::customers(string a, int b){
    fname = a;
    age = b;
    cout<<"name: "<<a<<endl<<"age: "<<b<<endl;
}

int main(){
    customers customer1("Gift", 15);
    customers customer2("Rosalia", 10);
    return 0;    
}