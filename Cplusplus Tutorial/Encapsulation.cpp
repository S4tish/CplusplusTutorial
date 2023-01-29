// Encapsulation

// The meaning of Encapsulation is to make sure that "sensitive " data is hidden from users.To
// achieve this you must declare class variable/attributes as private.If you want others to 
// read or modify the value if a private member you can provide public get and set methods

// Access private methods
// To access a private attribute , use public "get" and "set" methods

#include <iostream>
using namespace std;

class Employee{
    private:
    int salary;

    public:
    void setSalary(int s){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};
int main(){
    Employee.myObj;
    myObj.setSalary(5000);
    cout << myObj.getSalary();
    return 0;
}