
#include <iostream>
using namespace std;

class objVolume{
    int length, width, height;
    public:

void set_values(int, int, int);
    int volume(){
        return length*width*height;
    }
};

void objVolume::set_values(int a, int b, int c ){
    length = a;
    width = b;
    height = c;
}

int main(){
    objVolume obj1, obj2, obj3;
    obj1.set_values(10,20,30);
    obj2.set_values(40,30,20);
    obj3.set_values(5,15,25);
    
    
    cout<<"obj1 volume is "<<obj1.volume()<<endl;
    cout<<"obj2 volume is "<<obj2.volume()<<endl;
    cout<<"obj3 volume is "<<obj3.volume()<<endl;
    
    return 0;
}
