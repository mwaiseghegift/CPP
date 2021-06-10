#include <iostream>
using namespace std;


float areaTriangle(float b,float h){
    float area = 0.5 *b*h;
    return area;
}

int main(){
    float base, height, area;
    cout<<"Enter The base and height of the triangle"<<endl;
    cout<<"Base"<<endl;
    cin>>base;
    cout<<"Height"<<endl;
    cin>>height;
    area = areaTriangle(base, height);
    cout<<"The area is: "<<area;
    return 0;
}
