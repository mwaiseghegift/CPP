#include <iostream>
using namespace std;
#include <cstring>


union String{
    char name[5];
    int age;
};

int main(){
    union String s1;
    strcpy(s1.name, "Gift");
    //before replaced
    cout<<s1.name<< endl;
    s1.age = 10;

    //note name won't be in the output
    cout<<s1.name<< endl;
    cout<<s1.age;
    return 0;
}