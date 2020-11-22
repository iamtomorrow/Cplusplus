//C++ Default Keyword
#include <iostream>

using namespace std;

int main ()
{

    //The default keyword specifies some code to run if there is no case match
    int a = 3;
    switch (a) {
        case 1:
            cout << "number 1";
            break;
        case 3:
            cout << "number 3";
            break;
        case 4:
            cout << "number 4";
            break;
        case 5:
            cout << "number 5";
            break;
        default:
            cout << "I don't found your value!";       
    }

    return 0;

}
