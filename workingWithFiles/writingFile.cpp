#include <iostream>
#include <fstream> //for writing files
using namespace std;

int main(){
    ofstream file;
    file.open("sample1.txt");

    cout<<"Participants\n";
    cout<<"Enter participants\n";
    for(;;){
        char option;
        string name;
        cout<<"Do you want to continue? y/n"<<endl;
        cin>>option;

        if (option=='y'){
            cout<<"Enter the name\n";
            cin>>name;
            file<<name<<endl;
        }
        else if (option=='n'){
            break;
        }
    }
    return 0;

}

