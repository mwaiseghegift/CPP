#include <iostream>
#include <iomanip>
using namespace std;

int getChoice(){
    int choiceOperator;
    cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
    cin>>setw(1)>>choiceOperator;

    while(!cin.good()){
        cout<<"Oops! Make sure your input is ok";
        cin.clear();
        cin.ignore(INT32_MAX, '\n');

        cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
        cin>>setw(1)>>choiceOperator;
    }
    cin.clear();
    cin.ignore(INT32_MAX, '\n');
    return choiceOperator;
}
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
    int num1, num2;
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


    
    int choiceOperator=getChoice();
    switch(choiceOperator){
        case 1:
            addition(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            cout<<"Wrong Inputs, Please try again";
    }

    return 0;

}