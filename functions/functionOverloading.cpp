/* With function overloading, multiple functions 
can have the same name with different parameters
*/


#include <iostream>
using namespace std;

int areaFunc(int length, int width){
    return length*width;
}

double areaFunc(double length, double width){
    return length * width;
}

int main(){
    int intArea = areaFunc(10,7);
    double floatArea = areaFunc(10.7, 7.2);

    cout<<intArea<<endl;
    cout<<floatArea<<endl;
    return 0;
}

/* Multiple functions can have the same name as long as 
the number and/or type of parameters are different. */