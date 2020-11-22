//C++ Multiple Parameters

#include <iostream>

using namespace std;

void myFunction(string name, int age);

int main ()
{

    myFunction("George", 98);

    return 0;

}

void myFunction(string name, int age) {
    cout << name << ", " << age << " years old.";
}
