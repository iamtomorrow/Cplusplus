//C++ Break and Continue
#include <iostream>

using namespace std;

int main ()
{

    for (int i = 0; i <= 10; i = i + 2) {
        if (i == 8) {
            break;
        }   cout << i << endl;
    }

    return 0;

}
