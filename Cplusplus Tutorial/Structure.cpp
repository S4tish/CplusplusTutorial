// C++ Structure

// Structure are a way to group several related variables into one place.Each variable in the
// structure is known as a member of the structure

#include <iostream>
using namespace std;

int main(){
    struct{
        int myNum;
        string myString;
    }myStructure;

    myStructure.myNum=1;
    myStructure.myString="satish";

    cout << myStructure.myNum;
    cout << myStructure.myNum;
    return 0;
}