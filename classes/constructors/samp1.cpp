#include <iostream>
using namespace std;

 class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

/*Note: The constructor has the same name as the class, 
it is always public, and it does not have any return value.*/