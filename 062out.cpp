//C++ OOP (Object-Oriented Programming)
#include <iostream>

using namespace std;

class myCar {
    public:
        string Name;
        int Year;
        int Speed;

};

int main ()
{

    myCar car1;
    myCar car2;

    car1.Name = "Lamborghini";
    car1.Year = 2018;
    car2.Name = "Tesla";
    car2.Year = 2020;
    
    cout << car1.Name << ", " << car1.Year << endl;
    cout << car2.Name << ", " << car2.Year;

    return 0;

}
