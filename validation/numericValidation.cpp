#include <iostream>
#include <iomanip> //input output manipulation
using namespace std;

int getChoice(){
    int choice;

    cout<<"Enter Choice\n\a";
    cin>>setw(1)>>choice;

    //validation
    while(cin.good() == false){
        //error reporting
        cout<<"Error! Please try again\n";

        //clearing stream
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        //get new input
        cout<<"Enter Choice\n\a";
        cin>>setw(1)>>choice;
    }
     //clearing stream
    cin.clear();
    cin.ignore(INT32_MAX,'\n');
    return choice;
}

int main(){
    int choice;

    choice = getChoice();

    while(choice>0){
        switch(choice){
            case 1:
                cout<<"You chose 1\n";
                break;
            case 2:
                cout<<"You chose 2\n";
                break;
            case 3:
                cout<<"You chose 3\n";
                break;
            default:
                cout<<"Wrong input...Try again\n";
        }

        choice = getChoice();
    }
    return 0;
}
