//C++ Funtion Parameters #2
#include <iostream>

using namespace std;

double division(int a, int b) {
    double result;
    result = a / b;

    return result;
}

int main ()
{

    double a, b;
    cout << "1st number: ";
    cin >> a;
    cout << "2nd number: ";
    cin >> b;

    cout << division(a, b);

    return 0;

}
