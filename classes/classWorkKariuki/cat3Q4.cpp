#include <iostream>
using namespace std;

class superCar{
    string model;
    int maxSpeed;
    //pointer varibles
    string* modelAddress;
    int* maxSpeedAddress;

    public:
        superCar(string, int);
        //the finction get
        string get(){
            cout<<model<<endl;
            cout<<maxSpeed<<endl<<endl;

            cout<<"The memory address are:"<<endl;
            cout<<"Model "<<modelAddress<<endl;
            cout<<"maxSpeed Addess "<<maxSpeedAddress;
        }
};

//use of scope operator
superCar::superCar(string a, int b){
    model = a;
    maxSpeed = b;

    modelAddress = &model;
    maxSpeedAddress = &maxSpeed;
}

int main(){
    superCar car1("Hellcat", 250);
    superCar car2("MustangGT", 200);

    cout<<car1.get()<<endl;
    cout<<car2.get()<<endl;
}
