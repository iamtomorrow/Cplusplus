//C++ Multilevel Inheritance

#include <iostream>

using namespace std;

class myFather{
    public:
        void myFunction() {
            cout << "my function is here...";
        }
};

class myMother : public myFather {
};

class myChild : public myMother{
};

int main ()
{

    myChild myObj;
    myObj.myFunction();

    return 0;

}
