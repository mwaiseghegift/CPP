#include <iostream>
using namespace std;


//correct syntax
int main(){
    int n=10;
    while (n>0){
        n/=2; 
        //same as n=n/2
        cout<<n*n<<endl;
    }
    return 0;
}