#include <iostream>
using namespace std;

void confusedNumbers(int num1, int num2){
    cout<<"The first Num: "<<num1-1<<endl;
    cout<<"The second Num + 1: "<<num2+1;
}

int main(){
    int num1, num2;
    cout<<"Enter the first number\n";
    cin>>num1;
    cout<<"Enter the second number\n";
    cin>>num2;
    cout<<"Here is the output of the confused numbers"<<endl;
    confusedNumbers(num1, num2);
    
}