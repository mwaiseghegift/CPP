#include <iostream>
using namespace std;
#include <string>

struct tempData {
    string dayOfWeek;
    int day_temp;
} day[3];

void printtemp(tempData dayNo);

int main(){
    int n;

    for(n=0; n<3; n++){
        cout<<"Enter the day"<<endl;
        cin>> day[n].dayOfWeek;
        cout<<"Enter the temperature"<<endl;
        cin>>day[n].day_temp;
    }

    cout<<"The temperature for the last three days of the week are"<<endl;

    for(n=0; n<3; n++){
        printtemp(day[n]);
        }
    return 0;
}

void printtemp(tempData dayNo){
    cout<<dayNo.dayOfWeek<< " - ";
    cout<<dayNo.day_temp<<endl;
}

