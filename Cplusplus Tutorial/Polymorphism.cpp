// C++ Polymorphism

// polymorphism means many forms and ir occurs when we have many classes that are related to each
// other by inheritance

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Animal{
    public:
    void animalSound(){
        cout << " The animal makes a sound \n";
    }

};

// Derived Class
class Pig:public Animal{
    public:
    void animalSound(){
        cout << " The pig say : wee wee \n";
    }
};

class Dog:public Animal{
    public:
    void animalSound(){
        cout << " The dog says: bow wow \n";
    }
};

int main(){
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();

    return 0;

}