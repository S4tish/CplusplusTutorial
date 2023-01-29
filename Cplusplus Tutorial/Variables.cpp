// Variables
// variables are container for storing the data values

// 1 int = stores integers without decimals 
// 2 double = store floating  point numbers with decimals such as 19.99
// 3 char = stores the character value as a and B values are surrounded by single and double quotes
// 4 string = stores test such as " Hello world " string values are surrounded by double quotes
// 5 bool = store values with two states true or false

int myNum=5;
double myFloatNum=9.99;
char myLetter='S';
string myText="Satish";                                                 
bool myBoolean=true;

// Display Variables
#include <iostream>
using namespace std;

int main(){
    int myNum=23;
    cout <<" My age is " << myNum << " years old";
    return 0;
}

// Add Variables
#include <iostream>
using namespace std;

int main(){
    int a=24;
    int b=24;
    int sum=a+b;
    cout << sum;
    return 0;

}

// Declare multiple variables
#include <iostream>
using namespace std;

int main(){
    int x=5,y=7,z=10;
    cout << x+y+z;
    return 0;
}

