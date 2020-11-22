//C++ Class Method Inside
#include <iostream>

using namespace std;

class MyClass {
    public:
        void MyMethod() {
            cout << "Hello world";
        }
};

int main ()
{

    MyClass MyObj;
    MyObj.MyMethod();

    return 0;

}
