//a function to swap numbers
#include <iostream>
using namespace std;

void swapNumbers(int &num1, int &num2){
    int num3 = num1;

    num1 = num2;
    num2 = num3;
}

int main(){
    int buruklyn = 80;
    int wakadinali = 79;

    //before swap
    cout << buruklyn<<wakadinali<<endl;
    

    //after swap
    swapNumbers(buruklyn, wakadinali);
    cout << buruklyn<<wakadinali<<endl;
    return 0;
}