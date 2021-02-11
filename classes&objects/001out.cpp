//Classes/Objects
#include <iostream>

using namespace std;

class MyClass {
  public:
    string Name;
    int Age;

};

int main ()
{

  MyClass PersonA; MyClass PersonB;

  PersonA.Name = "George";
  PersonA.Age = 54;

  PersonB.Name = "Donald";
  PersonB.Age = 32;

  cout << PersonA.Name << " has " << PersonA.Age << " years\n";
  cout << PersonB.Name << " has " << PersonB.Age << " years";

  return 0;

}
