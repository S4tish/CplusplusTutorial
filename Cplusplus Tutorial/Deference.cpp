// C++ Dereference 

// Get Memory Address and Value

#include <iostream>
#include <string>
using namespace std;

int main(){
    string food="Pizza";  // variable declaration
    string* ptr=&food;  // Pointer declaration
     
     // reference output the memory address of food with the pointer
     cout << ptr << "\n";

     // Dereference: Output the value of food with the pointer
     cout << *ptr << "\n";
     return 0;
}