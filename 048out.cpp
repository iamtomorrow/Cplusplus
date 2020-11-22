//C++ Arrays and For Loop #2
#include <iostream>

int main ()
{

    std::string myComp[4] = {"SpaceX", "Blue Origin", "Tomorrow", "NASA"};
    //std::cout << myComp[3];
    for (int i = 0; i < 4; i++) {
        std::cout << i << " - " << myComp[i] << "\n";
    }

    return 0;

}
