//C++ Switch
#include <iostream>

using namespace std;

int main ()
{

    int a;
    cout << "enter a number: ";
    cin >> a;
    switch (a) {
        case 1:
            cout << "You typed the number 1";
            break;
        case 2:
            cout << "You typed the number 2";
            break;
        case 3:
            cout << "You typed the number 3";
            break;
        case 4:
            cout << "You typed the number 4";
            break;    
        default:
            cout << "Anything to show here!";
            break;
    }

    return 0;

}
