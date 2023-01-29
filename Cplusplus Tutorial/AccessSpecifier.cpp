// Access Specifier

// By now you are quite familiar with the public keyword that appears in all of our class example

#include <iostream>
using namespace std;

class MyClass{
    public:  // public access specifier
    int x;  // public attribute
};

int main(){
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.x=15;

    // Print the values
    cout << "myObj.x";
    return 0;

}


// In C++ there are three types of access specifier 

// 1 public = members are accessible from outside the class
// 2 private = members cannot be accessed from outside the class
// 3 protected = members cannot be accessed from outside the class however they can be accessed
// in inherited classes 

#include <iostream>
using namespace std;

class MyClass{
    public:   // public access specifier
    int x;    // public attribute
    private:   // private access specifier
    int y;     // private attribute 
};

int main(){
    MyClass myObj;

    myObj.x=20;   // Allowed x because x is public 

    myObj.y=30;   // Not allowed because x is private

    return 0
}