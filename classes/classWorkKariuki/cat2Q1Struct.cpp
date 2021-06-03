#include <iostream>
using namespace std;

//struct definition
struct Student{
    string name;
    int age;
};

int main(){
    struct Student st1;
    st1.name = "Mary";
    st1.age = 20;


    cout << st1.name<<endl<<st1.age<<endl;
    cout<<"memory addresses"<<endl;
    cout<<"Name : "<<&st1.name<<endl;
    cout<<"Age : "<<&st1.age<<endl;
    return 0;
}
