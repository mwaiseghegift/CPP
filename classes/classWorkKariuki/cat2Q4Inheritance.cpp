#include <iostream>
using namespace std;

class Building{
    public:
        string name;
};
//first sub_class
class buildingColor:public Building {
    public:
        string color;
};
//second subclass
class buildingFloors:public buildingColor{
    public:
        int floors;
};

int main(){
    buildingFloors b1;
    b1.name = "Retech Headquaters";
    b1.color = "blue";
    b1.floors = 40;

    cout<<b1.name<<endl;
    cout<<b1.color<<endl;
    cout<<b1.floors<<endl;
    return 0;
}