//Access Specifiers

#include <iostream>

using namespace std;

// Base Class
class Employee {
    protected:
        // Protected attribute
        int salary;
};

// Derivated Class
class Programmer : protected Employee {
    public:
        int Bonus = 540;
        // setter
        void setSalary(int s) {
            salary = s;
        }
        // getter
        int getSalary() {
            return salary;
        }
};

int main ()
{

    Programmer myObj;
    myObj.setSalary(8000);
    cout << "salary: " << myObj.getSalary() << " U$"; 
    cout << "\nbonus: " << myObj.Bonus << " U$";

    return 0;

}
