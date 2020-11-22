//C++ Functions Overloading
#include <iostream>

using namespace std;

int plusFunct(int a, int b);
double plusFunct(double a, double b);

int main ()
{

    cout << plusFunct(9, 4) << endl;
    cout << plusFunct(4.3, 5.1) << endl;

    return 0;

}

int plusFunct(int a, int b) {
    return a + b;

}

double plusFunct(double a, double b) {
    return a + b;

}
