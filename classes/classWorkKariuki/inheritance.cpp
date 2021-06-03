#include <iostream>
using namespace std;

class Vehicle{
    public:
        string name = "Dodge";
        void speed(){
            cout<<"200km/h"<<endl;
        }
};

class Cars:public Vehicle{
    public:
        string model="Ford";
};

int main(){
    Cars type1;
    type1.speed();

    cout<<type1.name<<endl;
    cout<<type1.model<<endl;
}