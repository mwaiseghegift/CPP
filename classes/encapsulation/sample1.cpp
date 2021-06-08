#include <iostream>
using namespace std;

class motorSpot{
    private:
        string owner;
        int age;
        string model;

    public:
    //setter
        void setObject(){
            cout<<"Enter The details of the car\n";
            cout<<"Owner\n";
            cin>>owner;
            cout<<"age\n";
            cin>>age;
            cout<<"model\n";
            cin>>model;
        }
    //getter
        void getObject(){
            cout<<owner<<endl<<age<<endl<<model<<endl;
        }
};

int main(){
    motorSpot car1;
    car1.setObject();
    cout<<endl;
    car1.getObject();
    return 0;
}