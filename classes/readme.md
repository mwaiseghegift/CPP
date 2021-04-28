# What is OOP(Object oriented Programming)

Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions

## Advantages of Object Oriented Programming
* OOP is faster and easier to execute
* Provides a clear structure for the programs
* Reduces the repitition of code, and makes the code easier to maintain, modify and debug
* OOP makes it possible to create full reusable applications with less code and shorter development time


# C++ Classes/Objects
Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members"

A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects


### Example

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

##### Explanation
* The class keyword is used to create a class called MyClass.
* The public keyword is an access specifier, which specifies that members (attributes and methods) of the class are accessible from outside the class.
* Inside the class, there is an integer variable myNum and a string variable myString. When variables are declared within a class, they are called attributes.
* At last, end the class definition with a semicolon ;