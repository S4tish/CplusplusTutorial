// C++ For Loop
// When you know exactly how many times you want to loop through a block of code use the for loop 
// instead of a while loop

#include <iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        cout << i << "\n";
    }
    return 0;
}

// Nested Loops
// It is also possible to place a loop inside another loop.This is also called a nested loop

// The inner loop will be executed one time for each iteration of the outer loop

#include <iostream>
using namespace std;

int main(){
    for(int i=1;i<=2;++i){
        // Outer loop
        cout << " Outer: " << i << "\n";  // Executes 2 times

        //Inner Loops
        for(int j=1;j<=3;j++){
            cout << " Inner: " << j << "\n";
        }
    }
    return 0;
}

// The foreach Loop

// There is also a for-each loop which is used exclusively to loop through element in an array

#include <iostream>
using namespace std;

int main(){
    int myNumbers[5]={10,20,30,40,50};
    for(int i:myNumbers){
        cout << i << "\n";
    }
    return 0;
}