// C++ Switch statements
// Use the switch statement to select one of many code blocks to be executed

#include <iostream>
using namespace std;

int main(){
    int day=4;
    switch(day){
        case 1:
        cout << " Monday";
        break;
        case 2:
        cout << " Tuesday";
        break;
        case 3:
        cout << " Wednesday";
        break;
        case 4:
        cout << " Thursday";
        break;
        case 5:
        cout << " Friday";
        break;
        case 6:
        cout << " saturday";
        break;
        case 7:
        cout << " Sunday";
        break;
    }
    return 0;
}


// The break keyword
// When C++ reaches a break keyword it breaks out of the switch block

// This will stop the execution of more code and case testing inside the block

// Default keyword
#include <iostream>
using namespace std;

int main(){
    int day=4;
    switch (day){
        case 6:
        cout << " Today is Saturday";
        break;
        case 7:
        cout << " Today is sunday";
        break;
        default:
        cout << " Looking forward to the weekend";
    }
    return 0;
}