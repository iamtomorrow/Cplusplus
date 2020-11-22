//C++ Functions Parameters
#include <iostream>

using namespace std;

void myFunction(string name);

int main ()
{

    myFunction("Talisson");
    myFunction("Gabriel");
    myFunction("Sophia");

    return 0;

}

void myFunction(string name) {
    cout << name << "\n";

}
