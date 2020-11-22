//C++ Default Parameters
#include <iostream>

using namespace std;

void myCountries(string country = "Sweden") {
    cout << country << endl;


}

int main ()
{

    myCountries();
    myCountries("USA");

    return 0;

}
