//C++ Multiple Objects
#include <iostream>

using namespace std;

class myCar {
    public:
        string Brand;
        string Model;
        int Year;

};

int main ()
{

    //1st object
    myCar carObj1;
    carObj1.Brand = "Toyota";
    carObj1.Model = "SUV";
    carObj1.Year = 1998;

    //2nd object
    myCar carObj2;
    carObj2.Brand = "Tesla";
    carObj2.Model = "Model X";
    carObj2.Year = 2020;

    cout << carObj1.Brand << ", " << carObj1.Model << ", " << carObj1.Year << endl;
    cout << carObj2.Brand << ", " << carObj2.Model << ", " << carObj2.Year;

    return 0;

}
