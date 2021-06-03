#include <iostream>
using namespace std;

class Animals{
    public:
        int price(){
            cout<<"The prices of the animals are as follows"<<endl;
        }
};

class bull:public Animals{
    public:
        int price(){
            cout<<"The bull is 100k"<<endl;
            }
};

class dog:public Animals{
    public:
        int price(){
            cout<<"The price of the bull is ok"<<endl;
            }
};

int main(){
    Animals myAnimal;
    bull bull1;
    dog dog1;

    myAnimal.price();
    bull1.price();
    dog1.price();
}