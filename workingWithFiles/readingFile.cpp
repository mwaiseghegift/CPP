#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file ("studentsData.txt"); //read the file

    string names;
    string input;

    while(file>>input){
        names.append(input);
    }

    for(string n: names)
}