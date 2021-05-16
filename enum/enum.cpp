#include <iostream>
#include <string>
using namespace std;

int main(){
    enum cars {
        mustang,
        bmw,
        benzo,
        lamborgini
    };

    enum car_owners {
        Gift,
        Gideon,
        Gama,
        Caleb,
        Maghanga
    };

    cars Model{mustang};
    car_owners Name{Gift};

    if (Model==Name)
        cout<< "That is the owner";
    else
        cout<< "That is not the owwner";
}