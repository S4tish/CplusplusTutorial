// C++ Constructor

// A constructor in C++ is a special method that is automatically called when an object of a
// class is created

// To create a constructor use the same name as the class followed by parentheses()

#include <iostream>
using namespace std;

class MyClass{   // The class
    public:      // Access specifier
    MyClass(){    //Constructor
        cout << " Satish singh";
    }
};

int main(){
    MyClass myObj;  // Create an object of MyClass (this will call the constructor 

    return 0;
}


// Constructor parameter

#include <iostream>
using namespace std;

class Car{
    string brand;
    string model;
    int year;

    Car(string x, string y, int z){
        brand=x;
        model=y;
        year=z;

    }

};

int main(){

    // Create Car objects and call the constructor with different values
    Car carObj1("BMW","X5","1999");
    Car carObj2("Ford","Mustang","1969");

    // print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    return 0;

}
