#include <iostream>
using namespace std;

int main(){
    int choice;

    cout<<"Enter Choice\n";
    cin>>choice;

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
                cout<<"Wrong input...Try again";
        }
        
        cout<<"Enter Choice: ";
        cin>>choice;
    }
    return 0;
}
