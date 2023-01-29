// C++ Multiple Inheritance

// A class can also be derived from more than one base class using a comma-separated list

#include <iostream>
using namespace std;

// Base class
class MyClass{
    public:
    void myFunction(){
        cout << " some content in parent class \n"
    }

};

// Another base class
class MyOtherClass{
    public:
    void myFunction(){
        cout << " some content in another class \n"
    }
};

// Derived class
class MyChildClass:public MyClass,public MyOtherClass{

};

int main(){
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myFunction();
    return 0;
}