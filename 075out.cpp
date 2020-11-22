//C++ Multiple Inheritance

#include <iostream>

using namespace std;

class myClass {
    public:
        void myFunction() {
            cout << "this is my first function";
        }
};

class myOtherClass {
    public:
        void myOtherFunction() {
            cout << "this is my other function";
        }
};

class myChildClass : public myClass, public myOtherClass {
};

int main ()
{

    myChildClass myObj;
    myObj.myFunction(); cout << "\n";
    myObj.myOtherFunction();

    return 0;

}
