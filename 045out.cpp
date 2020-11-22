//C++ Continue in While Loop
#include <iostream>

using namespace std;

int main ()
{

    int i = 0;
    while (i < 22) {
        if (i == 16) {
            i = i + 2;
            continue;
        }
        cout << i << endl;
        i = i + 2;
    }

    return 0;

}
