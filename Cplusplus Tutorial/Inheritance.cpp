// Inheritance

// In C++ it is possible to inherit attributes and methods from one class to another.We group
// the "inheritance" into two categories

// a derived class (child) = the class that inherits from another class
// b base class (parent) = the class being inherited from

// To inherit from a class , use the : symbol

#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle{
    public:
    string brand="ford";
    void honk(){
        cout << " tuut, tuut \n" ;
    }
};

// Derived class
class Car:public Vehicle{
    public:
    string model="mustang";
};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand+ " " + myCar.model;
    return 0;
}