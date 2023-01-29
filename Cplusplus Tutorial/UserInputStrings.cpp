// C++ User Input Strings

//When we working with strings we often use the getline() function to read a line of text.It takes cin
// as the first parameter and the string as the second parameter

#include <iostream>
#include <string>
using namespace std;

int main(){
    string fullname;
    cout << " Type your full name : ";
    getline(cin,fullName);
    cout << " Your name is: " << fullname;
    return 0;
}