//C++ Functions - Pass By Reference
#include <iostream>

using namespace std;

int swapNums(int &a, int &b) {
    int z = a;
    a = b;
    b = z;

}

int main ()
{

    int a = 9, b = 4;
    cout << "Before swap: ";
    cout << a << endl;
    cout << b << endl;

    swapNums(a, b);
    cout << "After swap: ";
    cout << a << endl;
    cout << b;

    return 0;

}
