//C++ Return Values
#include <iostream>
#include <cmath>

using namespace std;

double ourLog(double a);

int main ()
{

    cout << ourLog(5);

    return 0;

}

double ourLog(double a) {
    return log(a);

}
