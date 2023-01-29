// C++ Pointers
// A pointer however is a variable that stores the memory address as its value

// A pointer variable points to a data type (like int or string) of the same type and is created 
// with the * operator .The address of the variable of the variable you are working with is 
// assigned to the pointer

#include <iostream>
#include <string>
using namespace std;

int main(){
    string food="Pizza";  // A string variable
    string* ptr=&food;  // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    return 0;
}