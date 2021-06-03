#include <iostream>
using namespace std;

union student {
    char gender;
    int age;
};

int main(){
    union student student1;
    student1.gender='G';
    student1.age=14;

    cout<<student1.gender<<endl;
    cout<<student1.age<<endl;

    cout<<"Memory addresses"<<endl;
    cout<<"Gender: "<<&student1.gender<<endl;
    cout<<"Age: "<<&student1.age<<endl;

    return 0;

}
