#include <iostream>
using namespace std;

//function for addition
void add(int a,int b){
    int results = a+b;
    cout<<results<<endl;
}

void display_name(string name){
    cout<<name <<endl;
}

//default function
void name_var(string country="Kenya"){
    cout<<country<<endl;
}

int main(){
    add(5,2);
    display_name("Gift");
    name_var();
}