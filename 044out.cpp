//C++ Break in While
#include <iostream>

using namespace std;

int main ()
{

    int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
        if (i == 7) {
            break;
        }
    }

    return 0;

}
