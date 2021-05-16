#include <iostream>
using namespace std;
#include <string>

struct temp {
    string week_day;
    int day_temp;
} day[3];

void printtemp(temp no_day);

int main(){
    int index;

    for(index=0; index<3; index++){
        cout<<"Enter the day"<<endl;
        cin>> day[index].week_day;
        cout<<"Enter the temperature"<<endl;
        cin>>day[index].day_temp;
    }

    cout<<"The temperature for the last three days of the week are"<<endl;

    for(index=0; index<3; index++){
        printtemp(day[index]);
        }
    return 0;
}

void printtemp(temp no_day){
    cout<<no_day.week_day<< " - ";
    cout<<no_day.day_temp<<endl;
}

