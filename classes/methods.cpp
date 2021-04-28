/*
Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:

    Inside class definition
    Outside class definition 
*/

#include <iostream>
using namespace std;

//inline method
class School {
    public:
        void schoolMotto(){
            cout<<"Hard work pays"<<endl;
        }
};

//outside method
class School1 {
    public:
        void schoolMotto();
};

void School1::schoolMotto(){
    cout<<"Hard work pays"<<endl;
}

int main(){
    School Mwakitutu;
    Mwakitutu.schoolMotto();

    School1 Mwatate;
    Mwatate.schoolMotto();
}
