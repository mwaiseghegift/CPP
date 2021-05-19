#include <iostream>
using namespace std;
#include <string>

void studentData(){
    string fname, lname;
    cout<<"Enter Your First and Last Name\n";
    cout<<"First Name: ";
    cin>>fname;
    cout<<"Last Name: ";
    cin>>lname;
    cout<<fname<<" "<<lname<<" data entered successfully\n";
}

int main(){
    char last;
    for(;;){
        studentData();
        cout<<"Continue? y/n"<<endl;
        cin>>last;
        if (last=='n')
            break;
    }
    return 0;
}
