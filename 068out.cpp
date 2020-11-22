//C++ Contructors Parameters
#include <iostream>

using namespace std;

class Car {
    public:
        int Year;
        string Name;
        Car(int a, string b) {
            Year = a;
            Name = b;
        }

};

int main ()
{

    Car carObj1(1998, "Toyota");

    cout << carObj1.Year << "\n" << carObj1.Name;

    return 0;

}
