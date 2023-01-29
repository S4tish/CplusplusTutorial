// C++ Classes/Objects

// C++ is an object-oriented programming language

// Create a class

#include <iostream>
#include <string>
using namespace std;

class MyClass{    // The class
    public:   // Access specifier
    int myNum;  // Attribute variable
    string myString:   // Attribute (string Variable)

};

int main(){
    MyClass myObj;  // create an object of MyClass

    // Access attributes and set values
    myObj.myNum=15;
    myObj.myString="some text";

    //print values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}