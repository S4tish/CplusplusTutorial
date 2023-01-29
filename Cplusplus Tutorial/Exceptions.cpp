// C++ Exceptions

// When executing C++ code, different errors can occur coding error made by the programmer,
// errors due to wrong input or their things

// C++ try and catch

#include <iostream>
using namespace std;

int main(){
    try{
        int age=15;
        if(age>=18){
            cout << " Access granted- you are old enough";
        }else{
            throw(age);
        }
    }
    catch (int myNum){
        cout << " Access denied- You must be atleast 18 years old \n";
        cout << " Age is : " << myNum;
    }
    return 0;
}