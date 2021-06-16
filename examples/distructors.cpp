#include <iostream>
using namespace std;

class someEvent{
    public:
    //constructor
        someEvent(){
            cout<<"I have been created";
        }
    //deconstructor
        ~someEvent(){
            cout<<"I have been deleted";
        }
};

int main(){
    //creating an object to demonstrate constructor
    someEvent *eventAddress;
    eventAddress = new someEvent();

    char anykey;
    cout<<"\n>Press any key to continue: ";
    cin>>anykey;
    //deleting the object to demonstrate deconstructor
    delete eventAddress;
    return 0;
}

/*
Note:
That the name of the constructor and deconstructor are the same as 
the name os the class,

Also note the symbol of deconstructor
*/