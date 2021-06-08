#include <iostream>
using namespace std;

int main(){
    int age = 12;
    int* agePointer = &age;

    cout<<agePointer<<endl;
    cout<<*agePointer<<endl; //This is called dereference
    return 0;
}

//output
/*
0x7fffbbcda714
12

Note that the * sign can be confusing here, as it does two different things in our code:
    When used in declaration (string* ptr), it creates a pointer variable.
    When not used in declaration, it act as a dereference operator.

 */