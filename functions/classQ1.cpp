#include <iostream>
#include <string>
using namespace std;

void thee_name(string name){
    cout<<"Good morning"<<name;
}

int main(){
    string name;
    cout<<"Hello, Please enter your name"<<endl;
    cin>>name;
    thee_name(name);
    return 0;
}