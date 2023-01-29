// loop through an Array
 
 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
    string cars[5]={"volvo"."BMW","Ford","Mazda","Tesla"};
    for(int i=0;i<5;i++){
        cout << cars[i] << "\n";
    }
    return 0;
 }