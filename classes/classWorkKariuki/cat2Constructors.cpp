#include <iostream>
using namespace std;

class Car{
    int distance, time;
    public:
    //Constructor
        Car(int, int);
            int speed(){
                return distance/time;
            }
};

Car::Car(int a, int b){
    distance = a;
    time = b;
}

int main(){
    Car MustangGT(400,4);
    Car DodgeHellcat(300, 2);

    cout<<MustangGT.speed()<<endl;
    cout<<DodgeHellcat.speed()<<endl;
    return 0;
}