#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream file ("studentsData.txt"); //read the file

    vector <string> names;
    string input;

    while(file>>input){
        names.push_back(input);
    }

    for(string n:names){
        cout<<n<<endl;
    }
    return 0;
}
