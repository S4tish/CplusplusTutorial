// String Length

// To get the length of a string, use the length() function

#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << " The length of the txt string is: " << txt.length();
    return 0; // The output will be 26
}

// You might see sime C++ programs that use size() function to get the length of a string.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string txt="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << " The length of the text string is : " << txt.size();
    return 0;
}