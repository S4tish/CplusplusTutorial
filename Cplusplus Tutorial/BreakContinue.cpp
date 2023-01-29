// C++ Break and Continue

// C++ Break
// The break statement can also be used to jump out of a loop

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        if(i==4){
            break;
        }
        cout << i << "\n";
    }
    return 0;
}


// C++ Continue
// The continue statement breaks one iteration if a specified condition occurs and continues with
// the next iteration in the loop

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        if(i==4){
            continue;
        }
        cout << i << "\n";
    }
    return 0;
}