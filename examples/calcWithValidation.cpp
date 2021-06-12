#include <iostream>
using namespace std;

//functions for the math
int addition(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a*b;
}

float divide(int a, int b){
    return a/b;
}

int main(){
    int num1, num2, choiceOperator;
    cout<<"Enter the two numbers to operate"<<endl;
    cout<<"The fist number"<<endl;
    cin>>num1;

    while(!cin.good()){
        cout<<"Error! please check out the input\n";
        cin.clear();
        
        cout<<"Enter the number again\n";
        cin>>num1;
    }

    cout<<"Enter The second Number"<<endl;
    cin>>num2;


    cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
    cin>>choiceOperator;

    

    return 0;

}