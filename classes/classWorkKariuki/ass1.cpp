
#include <iostream>
using namespace std;

class Crectangle {
    int x,y;
    public:
        void set_values(int, int);
        int area()
        {
            return x*y;
        }
};
void Crectangle::set_values(int a, int b)
        {
        x=a;
        y=b;
        }

int main(){
    Crectangle rect;
        rect.set_values(4,4);
        cout<<"Area of the rectangle"<<endl<<rect.area()<<endl;
    return 0;
}

