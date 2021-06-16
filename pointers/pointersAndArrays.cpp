#include <iostream>
using namespace std;

int main(){
    int ages[5]{5,10,15,8,10};
    int *ptArray = ages;
    cout<<ages<<endl;
    cout<<&ages<<endl;
    cout<<&ages[0]<<endl;
    cout<<&ages[3]<<endl;

    //indirecting the array pointer prints the first value
    cout<<*ages<<endl;
    //printing size of the array and pointer
    cout<<sizeof(ages)<<endl;//length of array*size
    cout<<sizeof(ptArray);//size of the memory address
    return 0;
}

/*
    outputs
    0x7ffc353badc0
    0x7ffc353badc0
    0x7ffc353badc0
    0x7ffc353badcc
    5
    20
    8
*/