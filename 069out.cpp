//C++ Constructors #2 Outside
#include <iostream>

using namespace std;

class Companies{
    public:
        string Name;
        string Country;
        int Year;
        Companies(string a, string b, int c);
};

Companies::Companies(string a, string b, int c){
    Name = a;
    Country = b;
    Year = c;

}

int main ()
{

    Companies Company01("Tomorrow", "Tomorrow Kingdom", 2020);
    Companies Company02("SpaceX", "USA", 2002);

    cout << Company01.Name << ", " << Company01.Country << ", " << Company01.Year << endl;
    cout << Company02.Name << ", " << Company02.Country << ", " << Company02.Year;

    return 0;

}
