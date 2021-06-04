#include <iostream>
using namespace std;

int main(){
    try{
        int age;
        cout<<"enter your age"<<endl;
        cin>>age;

        if (age>=18>100){
            cout<<"You can vote"<<endl;
        }else{
            throw(age);
            }
    }

    catch(int a){
        cout<<"Sorry, You are not old enough to vote or may be you too old for voting "<<endl;
        cout<<"You are only "<<a<<" years old";
    }
    return 0;
}