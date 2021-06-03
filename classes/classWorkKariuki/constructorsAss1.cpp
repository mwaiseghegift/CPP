#include <iostream>
using namespace std;

class Crectangle {
    int length, width;

    public:
        Crectangle(int, int);
            int area(){
                return width*length;
            }
        };
Crectangle::Crectangle(int a, int b){
    width=a;
    length=b;
}

int main(){
     Crectangle rec1(3,4);
     Crectangle rec2(4,5);

     cout<<"Area of rec1 is "<<rec1.area()<<endl;
     cout<<"Area of rec2 is "<<rec2.area()<<endl;
     return 0;
    }

