#include <iostream>
#include <string>
using namespace std;

int main(){
    enum unitCodes {
        BIT224,
        COM220,
        COM223,
        COM225,
        COM226,
        STA205,
        UCC202,
        UCC203
    };
    
    unitCodes code;
    cout<<"My favourite units are:\n";
    switch (code){
        case BIT224:
            cout << "BIT224\n";
        case COM220:
        case COM223:
            cout<<"COM223\n";
        case COM225:
        case COM226:
            cout<<"COM226\n";
        case STA205:
        case UCC202:
        case UCC203:
        default:
            cout<<"oops, something is wrong here";

    }
}