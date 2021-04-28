#include <iostream>
#include <string>
using namespace std;

class csStudent {
    public:
        int id;
        string languageSpecialized;
};


int main(){
    csStudent caleb;
    caleb.id = 1;
    caleb.languageSpecialized = "python";

    csStudent jackson;
    jackson.id = 2;
    jackson.languageSpecialized = "pascal";

    csStudent clemence;
    clemence.id = 3;
    clemence. languageSpecialized = "javascipt";


    //printing the values
    cout<<caleb.id<<" "<<caleb.languageSpecialized<<endl;
    cout<<jackson.id<<" "<<jackson.languageSpecialized<<endl;
    cout<<clemence.id<<" "<<clemence.languageSpecialized<<endl;
    return 0;
}