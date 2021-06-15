#include <iostream>
#include <iomanip>
using namespace std;

int getChoice(){
    int choiceOperator;
    cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
    cin>>setw(1)>>choiceOperator;

    while(!cin.good()){
        cout<<"Oops! Make sure your input is ok\n";
        cin.clear();
        cin.ignore(INT32_MAX, '\n');

        cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
        cin>>setw(1)>>choiceOperator;
    }
    cin.clear();
    cin.ignore(INT32_MAX, '\n');
    return choiceOperator;
}

//num1 validation

int num1Validated(){
    int num1;
    cout<<"The fist number"<<endl;
    cin>>num1;

    while(!cin.good()){
        cout<<"Error! the input should be a number\n";
        cin.clear();
        cin.ignore(INT32_MAX, '\n');

        cout<<"The fist number"<<endl;
        cin>>num1;
    }
    cin.clear();
    cin.ignore(INT32_MAX, '\n');
    return num1;
}

//num2 validation
int num2Validated(){
    int num2;
    cout<<"Enter The second Number"<<endl;
    cin>>num2;

    while(!cin.good()){
        cout<<"Oops! The second number must be a number\nPlease try again\n";
        cin.clear();
        cin.ignore(INT32_MAX,'\n');
        cin>>num2;
    }
    //clearing cin
    cin.clear();
    cin.ignore(INT32_MAX, '\n');
    return num2;
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
    int num1, num2, results;
    cout<<"Enter the two numbers to operate"<<endl;
    num1= num1Validated();
    num2 = num2Validated();

    int choiceOperator=getChoice();
    switch(choiceOperator){
        case 1:
            results = addition(num1, num2);
            break;
        case 2:
            results = subtract(num1, num2);
            break;
        case 3:
            results = multiply(num1, num2);
            break;
        case 4:
            results = divide(num1, num2);
            break;
        default:
            cout<<"Wrong Inputs, Please try again";
    }

    cout<<"\nThe answer is: "<<results<<endl;

    return 0;

}