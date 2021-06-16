#include <iostream>
using namespace std;


int main(){
    int age = 10;
    int* agePtr = &age;

    cout<<age<<endl;
    //printing age
    cout<<agePtr<<endl;
    //indirection
    cout<<*agePtr;
}

/*
output
10
0x7ffc3e782274
10
*/