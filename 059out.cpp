//C++ Return Values #3
#include <iostream>

using namespace std;

int myCube(int a);

int main ()
{

    int x = myCube(3);
    cout << x;

    return 0;

}

int myCube(int a) {
    return a * a * a;

}
