#include <iostream>
using namespace std;

struct schools{
    int population;
    char genderMax;
};

int main(){
    struct schools object[2];
    object[0].population = 1000;
    object[0].genderMax = 'f';

    object[1].population = 1200;
    object[1].genderMax = 'm';

    for(int i=0; i<=2; i++){
        cout<<object[i].population<<"\n";
        cout<<object[i].genderMax<<"\n";
    }
    return 0;
}