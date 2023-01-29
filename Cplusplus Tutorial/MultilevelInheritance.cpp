// Multilevel Inheritance

// Multilevel Inheritance
// A class can also be derived from one class which is derived from another class

#include <iostream>
using namespace std;

// parent class
class MyClass{
    public:
    void myFunction(){
        cout << " some content in parent class";
    }
};

// child class
class MyChild:public MyClass{

};

// Grandchild class
class MyGrandChild:public MyChild{

};

int main(){
    MyGrandChild myObj;
    myObj.myFunction();
    return 0;
}