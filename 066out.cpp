//C++ Class Method #2 Outside
#include <iostream>

using namespace std;

class MyClass {
    public:
        void MyMethod();

};

void MyClass::MyMethod() {
    cout << "Hello world";
}

int main ()
{

    MyClass MyObj;
    MyObj.MyMethod();

    return 0;

}
