// C++ Modify pointers

// You can also change the pointer value .But note that this will also change the value of the 
// original variable

#include <iostream>
#include <string>
using namespace std;

int main(){ 
    string food="Pizza";
    string* ptr=&food;

    // Output the value of food
    cout << food << "\n";

    // output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output 
}