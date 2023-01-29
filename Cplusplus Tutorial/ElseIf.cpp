// Else if Statements

#include <iostream>
using namespace std;

int main(){
    int time=20;
    if(time<18){
        cout << " Good day ";
    }else{
        cout << " Good evening";
    }
    return 0;
}

// Example 2
#include <iostream>
using namespace std;

int main(){
    int time=22;
    if(time<10){
        cout << " Good morning";
    }else if(time<20){
        cout << " Good day";
    }else {
        cout << " Good evening";
    }
    return 0;
}