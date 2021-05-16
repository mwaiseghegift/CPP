#include <iostream>
#include <string>
using namespace std;

int main(){
    enum secondYearUnits{
        BIT224,
        COM220,
        COM223,
        COM225,
        COM226,
        STA205,
        UCC202,
        UCC203
    };

    secondYearUnits code;
    cout << "My favourite subects includes the following:"<<endl;

    switch (code){
        case BIT224:
        case COM220: cout<<"COM220"<<endl;
        case COM223: cout<<"COM223"<<endl;
        case COM225:
        case COM226: cout<<"COM226"<<endl;
        case STA205:
        case UCC202:
        case UCC203:
        default: cout<<"NO Favourite subject in the list";
    }
    return 0;
}
