#include <iostream>
using namespace std;
class superCar{
    public:
    //constructor
        superCar(){
            cout<<"constructor called"<<endl;
        }
    //destructor
        ~superCar(){
            cout<<"Deconstructor called"<<endl;
            }      
};

int main(){
    superCar *store;
    store = new superCar();
    delete store;
    return 0;
}