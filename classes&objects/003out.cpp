//Class method # 002
#include <iostream>

using namespace std;

class MyClass {
  public:
    string Brand;
    string Model;
    int Year;
    void myMethod(string brand, string model, int year) {
      Brand = brand;
      Model = model;
      Year = year;

    }

};

int main ()
{

  MyClass Tesla;
  Tesla.myMethod("Tesla", "ModelX", 2020);

  cout << Tesla.Brand << ", " << Tesla.Model << ": " << Tesla.Year;

  return 0;

}
