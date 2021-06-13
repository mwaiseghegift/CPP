#include <iostream>
#include <algorithm> //for all_of
#include <cctype>
#include <string>

using namespace std;

bool isNameValid(string name){
    return all_of(name.begin(), name.end(), [](char ch){
        return (isalpha(ch) || isspace(ch));
    });
}

int main(){
    string name{};

    if (!isNameValid(name)){
        cout<<"Enter the Name: ";
        getline(cin, name);
    }

    cout<<"Did you really Enter "<<name<<endl;
    return 0;
}


