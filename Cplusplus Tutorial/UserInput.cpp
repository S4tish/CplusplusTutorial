// C++ User Input

// You have already learned that cout is used to output values.Now we will use cin to get user input

// cin is a preferred variables that reads data from the keyword with the extraction operator
// (>>).

// In the following example the user can input a number which is stored in the variable x. Then
// we print in the variable x. Then we print the value x.

#include <iostream>
using namespace std;

int main(){
    int x;
    cout << " Type a number: ";   // Type a number and press enter
    cin >> x; // get user input from the keyword
    cout << " Your number is: " << x;
    return 0;
}

// Made a simple calculator
#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << " Type a number : ";
    cin >> x;
    cout << " Type a other number : ";
    cin >> y;
    sum =x+y;
    cout << "Sum is : " << sum;
    return 0;
}