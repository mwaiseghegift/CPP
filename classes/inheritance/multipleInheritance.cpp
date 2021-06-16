#include <iostream>
using namespace std;

class parent{
    public:
        void shout(){
            cout<<"parent here\n";
        }
};

class parent2{
    public:
        void shout2(){
            cout<<"Parent2 called\n";
        }
};

class grandie:public parent,public parent2{

};

int main(){
    grandie obj1;
    obj1.shout();
    obj1.shout2();

}