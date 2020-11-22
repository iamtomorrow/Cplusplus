//C++ Else if
#include <iostream>

using namespace std;

int main ()
{

    int time = 6;
    if (time < 10) {
        cout << "Good morning";
    } else if (time < 18) {
        cout << "Good afternoon";
    } else {
        cout << "Good evening";
    }

    return 0;

}
