//C++ Classes and Objects
#include <iostream>

using namespace std;

class myClass {
    public:
        int myNum;
        string myStr;

};

int main ()
{

    myClass myObj;

    myObj.myNum = 45;
    myObj.myStr = "I'm happy today!";

    cout << myObj.myNum << ", " << myObj.myStr;

    return 0;

}
