// C++ Function Parameters

// Information can be passed to function as a parameter .Parameter act as variables inside the function

// Parameters are specified after the function name,inside the parentheses.You can add as many
// parameters as you want just separate them with a comma

#include <iostream>
#include <string>
using namespace std;

void MyFunction(string fname){
    cout << fname << "satish\n";
}
int main(){
    myFunction("Amandeep");
    myFunction("Amardeep");
    myFunction("Ninja");
    return 0;
}