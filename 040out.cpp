//C++ For Loops Another Example
#include <iostream>

using namespace std;

int main ()
{

    int a, b, r;
    cout << "first term: ";
    cin >> a;
    cout << "last term: ";
    cin >> b;
    cout << "reason: ";
    cin >> r;
    for (int i = a; a <= b; a = a + r) {
        cout << a << endl;
    }

    return 0;

}
