//C++ Inheritance

#include <iostream>

using namespace std;

class Vehicle {
    public:
    string Brand = "Horse Power";
};

class Car : public Vehicle {
    public:
    int Year = 2026;
};

int main () 
{

    Car myCar;
    cout << "Brand: " << myCar.Brand << endl;
    cout << "Year: " << myCar.Year;

    return 0;

}
