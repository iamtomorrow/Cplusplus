//Class Methods

#include <iostream>

using namespace std;

class MyClass {
  public:
    string Name;
    int Age;
    void myMethod(string x, int y) {
      Name = x;
      Age = y;
    }

};

int main ()
{

  string name; int age;
  MyClass myObj;

  cout << "What's your name? ";
  getline(cin, name);
  cout << "How old you are? ";
  cin >> age;

  myObj.myMethod(name, age);

  cout << myObj.Name << " is " << myObj.Age << " years old";

  return 0;

}
