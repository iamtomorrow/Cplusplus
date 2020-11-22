//C++ Access Specifiers

#include <iostream>

using namespace std;

class MyClass {
    public:
        string my1stName;
        string my2ndName;
        int myAge;
        MyClass(string stname, string ndname, int age){
            my1stName = stname;
            my2ndName = ndname;
            myAge = age;
        }

};

int main ()
{

    //My objects
    MyClass UserB("Gabriel", "Gragor", 19);
    MyClass UserD("Sophia", "Blaster", 43);

    cout << UserB.my1stName << ", " << UserB.myAge << endl;
    cout << UserD.my1stName << ", " << UserD.myAge;

    return 0;

}
