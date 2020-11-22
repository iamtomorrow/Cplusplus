//Polymophism

#include <iostream>

using namespace std;

class Animals {
    public:
    void animalSounds() {
        cout << "all the animals have a specific sound";
    }

};

class Dog : public Animals {
    public:
    void animalSounds() {
        cout << "the dog says au, au";
    }

};

class Cat : public Animals {
    public:
    void animalSounds() {
        cout << "the cat says miau, miau";
    }

};

int main ()
{

    Animals myObj;
    Dog myDog;
    Cat myCat;

    myObj.animalSounds(); cout << "\n";
    myDog.animalSounds(); cout << "\n";
    myCat.animalSounds();

    return 0;

}
