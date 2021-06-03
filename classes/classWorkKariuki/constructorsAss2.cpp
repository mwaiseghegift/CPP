#include <iostream>
#include <string>
using namespace std;


class Car{
    string make, model;
    int year;

    public:
        Car(string, string, int);
        char carProperties(){
            cout<<make<<endl;
            cout<<model<<endl;
            cout<<year<<endl;
        }
};


Car::Car(string a, string b, int c){
    make = a;
    model = b;
    year = c;
}

int main(){
    Car car1("Dodge","Hellcat", 2020);
    Car car2("Ford", "Mustang", 2016);
    Car car3("Dodge","Challenger", 2020);

    cout<<car1.carProperties()<<endl;
    cout<<car2.carProperties()<<endl;
    cout<<car3.carProperties()<<endl;

}
