#include <iostream>
using namespace std;

class carShow{
    private:
        string owner;

    public:
        void setOwner(string a){
            owner = a;
        }

        string getOwner(){ 
            return owner;
            }
};

int main(){
    carShow DODGE_CHARGER_SRT;
    DODGE_CHARGER_SRT.setOwner("Gift");
    cout<<DODGE_CHARGER_SRT.getOwner();
    return 0;
}

