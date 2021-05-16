#include <iostream>
using namespace std;
#include <string>

struct temp {
    string weekday;
    float temp;
} day[3];

void printtemp(temp weekday);

int main(){
    int i;

    for(i=0; i<3; i++){
        cout<<"Input the day"<<endl;
        cin>> day[i].weekday;
        cout<<"Enter temperature"<<endl;
        cin>>day[i].temp;
    }

    cout<<"Temp for the last 3 days"<<endl;

    for(i=0; i<3; i++){
        printtemp(day[i]);
        }
    return 0;
}

void printtemp(temp weekday){
    cout<<weekday.weekday<< " - ";
    cout<<weekday.temp<< " degrees" <<endl;
}

