//C++ String Concatenation / Append

#include <iostream>

using namespace std;

int main ()
{

    string fname, lname;
    
    cout << "1st name: ";
    cin >> fname;
    cout << "2nd name: ";
    cin >> lname;

    string fullname = fname + " " + lname;

    cout << "your name is: " << fullname;

    return 0;

}
