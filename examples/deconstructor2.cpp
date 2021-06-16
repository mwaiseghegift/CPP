#include <iostream>

class deconDemo{
    public:
        //constructor
        deconDemo(){
            //use of scope operator
            std::cout<<"Hello there!.. its constructor here\n";
        }

        //deconstructor demo
        ~deconDemo(){
            std::cout<<"Hello there!... deconDemo object deleted\n";
        }
};

int main(){
    //creating a memory address for the object
    deconDemo *object;
    //creating an object
    object = new deconDemo();
    //deleting an object
    delete object;
    return 0;
}