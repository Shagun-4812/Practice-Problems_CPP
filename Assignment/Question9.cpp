#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    void show(int x) {
        cout << "Base class show function with int: " << x << endl;
    }

    void show(double x) {
        cout << "Base class show function with double: " << x << endl;
    }
};

class Derived : public Base {
public:
    using Base::show; // Bring the overloaded functions from Base into scope

    void show(string x) {
        cout << "Derived class show function with string: " << x << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Calling overloaded functions in Base class
    baseObj.show(10);       // Calls Base::show(int)
    baseObj.show(3.14);     // Calls Base::show(double)

    // Calling functions in Derived class
    derivedObj.show(20);    // Calls Base::show(int) due to using declaration
    derivedObj.show(2.71);  // Calls Base::show(double) due to using declaration
    derivedObj.show("Hello"); // Calls Derived::show(string)

    return 0;
}