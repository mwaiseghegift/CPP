#include <iostream>
using namespace std;

char* characterPointer;
string* stringPointer;
bool* boolPointer;
float* floatPointer;

struct structSample{
    int name;
    string bio;
    char gender;
};

structSample* structPointer;

int main(){
    //using sizeof() function to get their sizes
    cout<<"char: "<<sizeof(characterPointer)<<" bytes"<<endl;
    cout<<"string: "<<sizeof(stringPointer) <<" bytes"<<endl;
    cout<<"bool: "<<sizeof(boolPointer)<<" bytes"<<endl;
    cout<<"float: "<<sizeof(floatPointer)<<" bytes"<<endl;
    cout<<"struct: "<<sizeof(structPointer)<<" bytes";
    return 0;
}

/*
Output
char: 8
string: 8
bool: 8
float: 8
struct: 8

Conclusion
 The size of the pointer is always the same. 
 This is because a pointer is just a memory address, 
 and the number of bits needed to access a memory address on a given machine 
 is always constant.
 */