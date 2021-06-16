/*
Just know about
try, throw, catch
*/

#include <iostream>
const long int minCarWorth = 10000000;

int main(){
    try{
        long int carWorth;
        std::cout<<"Enter your car worth\n";
        std::cin>>carWorth;

        if (carWorth>=minCarWorth){
            std::cout<<"You are qualified to join the club\n";
        }else {
            throw(carWorth);
        }

    }
    catch(int thePrice){
        std::cout<<"Please upgrade your car to be able to join\n";
        std::cout<<"The value of your car is "<<minCarWorth-thePrice<<" less the min price";
    }
    return 0;
}