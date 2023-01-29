// Multiple Parameters 
// Inside the function you can add as many parameters as you want

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age){
    cout << fname << "singh" << age << "years old \n"
}
int main(){
    myFunction("amardeep",8);
    myFunction("Jenny",9);
    myFunction("anja",8);
    return 0;
}