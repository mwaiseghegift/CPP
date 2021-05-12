#include <iostream>
using namespace std;
#include <string>

struct temp {
    string week_day;
    int day_temp;
} day[3];

void printtemp(temp no_day);

int main(){
    int day_index;

    for(day_index=0; day_index<3; day_index++){
        cout<<"Enter the day"<<endl;
        cin>> day[day_index].week_day;
        cout<<"Enter the temperature"<<endl;
        cin>>day[day_index].day_temp;
    }

    cout<<"The temperature for the last three days of the week are"<<endl;

    for(day_index=0; day_index<3; day_index++){
        printtemp(day[day_index]);
        }
    return 0;
}

void printtemp(temp no_day){
    cout<<no_day.week_day<< " - ";
    cout<<no_day.day_temp<<endl;
}

