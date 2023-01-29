// Class methods

// Methods are function that belong to the class

// There are two ways to define function that belong to a class
// 1 Inside class definition
// 2 Outside class definition

#include <iostream>
using namespace std;

class MyClass{   // The class

    void myMethod(){   // Access modifier
        cout << "satish singh";
    }
};
int main(){
    MyClass myObj;  // create an object of an class

    myObj.myMethod();  // call the method
    return 0;
}