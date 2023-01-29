// Access Strings

// You can access the characters in a string by referring to its index number inside square brackets[]

#include <iostream>
using namespace std;

int main(){
    string myString="satish";
    cout << myString[0];
    return 0;
}


// Change String Characters
// To change the value of a specific character in a string refer to the index  and use single quotes

#include <iostream>
#include <string>
using namespace std;

int main(){
    string myString="satish";
    myString[0]='A';
    cout << myString;
    return 0;
}