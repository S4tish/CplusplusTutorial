// String Concatenation

// The + operator can be used between strings to add them together to make a new string.This is
// called concatenation

#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName="john";
    string lastName="Doe";
    string fullName=firstName + lastName;
    cout << fullName;
    return 0;
}

// Append
// A string in C++ is actually an object which contain function that can perform certain operations
// on strings.For example you can also concatenate strings with the append() function

#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName="satish";
    string lastName=firstName.append(lastName);
    cout << fullName;
    return 0;
}
