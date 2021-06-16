    #include <iostream>
    using namespace std;

    int main(){
        try{
        char answer;
        cout<<"Have you paid? y/n\n>";
        cin>>answer;

        if (answer=='y'){
            cout<<"You can continue using my internet\n";
        }else{
            throw 505;
        }
        }catch(...){
            cout<<"Access denied... Isso gon kill you if you ever continue using\n";
        }
        return 0;
    }