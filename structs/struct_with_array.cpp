#include <iostream>
using namespace std;
#include <string>
#include <sstream>

struct fav_movie {
    string title;
    int year;
} film[3];

void printmovie(fav_movie movie);

int main(){
    int n;

    for (n=0; n<3; n++){
        cout<<"Enter Title"<<endl;
        cin>>film[n].title;
        cout<<"Enter Year"<<endl;
        cin>>film[n].year;
    }

    cout<<"You entered the following"<<endl;
    for (n=0; n<3; n++){
        printmovie(film[n]);
    }
    return 0;
}

void printmovie(fav_movie movie){
    cout<< movie.title <<" - ";
    cout<< movie.year<<endl;
}



