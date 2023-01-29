 
 // C++ Default Parameters

 // You can also use a default parameter value by using the equals sign (=)

 // If we call the function without an argument,it used the default value ("Norway");
 
 #include <iostream>
 #include <string>
 using namespace std;

 void myFunction(string country="Norway"){
    cout << country << "\n";
 }
 int main(){
    myFunction("Swedan");
    myFunction("India");
    myFunction();
    myFunction();
    myFunction("USA");
    return 0;
 }