//C++ Access Specifiers
#include <iostream>

using namespace std;

class MyClass{
    public:
        int a;
    private:
        int b;    
};

int main ()
{

    MyClass MyObj;

    MyObj.a = 5;
    MyObj.b = 2;

    cout << MyObj.a << ", " << MyObj.b;     //error: b is private

    return 0;

}
