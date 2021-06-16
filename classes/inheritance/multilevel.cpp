#include <iostream>
using namespace std;

//base class
class test{
    public:
     int sample;
};

//derived class
class test2:public test{
    public:
        string sample2;
};

//derived class
class test3:public test2{
    public:
        char gender;
};

int main(){
    test3 object1;
    object1.sample = 10;
    object1.sample2 = "Ten";
    object1.gender = 'F';

    cout<<object1.sample<<" "<<object1.sample2<<" "<<object1.gender;
}



