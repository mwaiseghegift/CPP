#include <iostream>
using namespace std;

int rec_num(int num){
    if(num<=1){
        return 1;
    }
    return num*rec_num(num-1);
}

int main(){
    int num;
    cout<<"Enter the number to find the recursion"<<endl;
    cin>>num;
    cout<<rec_num(num);
}