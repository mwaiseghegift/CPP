#include <iostream>
using namespace std;
const float PIE = 22/7;

float AreaOfCircle(float radius, float height){
    float area;
    area = (PIE * radius*radius)+(PIE*(radius*2));
    return area;
}

int main(){
    double radius, heigth, area;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>radius;
    cout<<"Enter Heigth"<<endl;
    cin>>heigth;
    area = AreaOfCircle(radius, heigth);
    cout<<area<<endl;
}
