// special Characters
// Because strings must be written within quotes, C++ will misunderstand this string and generate
// an error

// The solution to avoid this problem is to use the backslash escape character 

#include <iostream>
using namespace std;

int main(){
    string txt=" I am satish \"singh\" I am a computer science student";
    cout << txt;
    return 0;
}