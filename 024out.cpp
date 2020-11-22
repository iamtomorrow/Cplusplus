//C++ User Input String
#include <iostream>

using namespace std;

int main ()
{

    string fullname;
    cout << "Your name: ";
    getline (cin, fullname);

    cout << "Your name is " << fullname;

    return 0;

}