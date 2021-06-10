#include <iostream>
using namespace std;

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
    cout<<"Enter the two numbers to operate\n";
    cout<<"The fist number"<<endl;
    cin>>num1;

    if (num1 == NULL){
        cout<<"Please enter the value";
    }
    cout<<"Enter The second Number"<<endl;
    cin>>num2;

    if (num2 == NULL){
        cout<<"Please enter the value\n";
        cin>>num1;
    }

    cout<<"Choose an operator\n1 for +\n2 for -\n3 for *\n4 for /\n";
    cin>>choiceOperator;
    if (choiceOperator==NULL){
        cout<<"Please enter an operator\n";
        cin>>choiceOperator;
    }

    if (choiceOperator==1){
        cout<<addition(num1,num2);
    }else if (choiceOperator==2){
        cout<<subtract(num1,num2);
    }else if (choiceOperator==3){
        cout<<multiply(num1, num2);
    }else if (choiceOperator==4){
        cout<<divide(num1, num2);
    }else
        cout<<"You entered an invalis operator\n";

    return 0;

}