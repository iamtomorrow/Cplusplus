//C++ Continue
#include <iostream>

using namespace std;

int main ()
{

    for (int i = 0; i < 10; i++) {
        if (i == 4 || i == 6) {
            continue;
        }   cout << i << endl;
    }

    return 0;

}
