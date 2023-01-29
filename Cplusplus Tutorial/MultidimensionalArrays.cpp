// Multi dimensional Arrays

// A multi dimensional array ia an array of arrays

#include <iostream>
using namespace std;

int main(){
    string letters[2][4]={{"A","B","C","D"},{"E","F","G","H"}};
    cout << letters[0][2];
    return 0;
}

// How to change the multidimensional Arrays

#include <iostream>
using namespace std;

int main(){
     string letters[2][4]{{"A","B","C","D"},{"E","F","G","H"}};
     letters[0][0]="Z";
     cout << letters[0][0];
     return 0;
}