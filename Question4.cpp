#include <iostream>
using namespace std;

class Base {
public:
    void baseFunction() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void derivedFunction() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj; // Base class pointer pointing to a derived class object

    // Use static_cast to convert the base class pointer back to the derived class pointer
    Derived* derivedPtr = static_cast<Derived*>(basePtr);

    // Access a derived class-specific method
    derivedPtr->derivedFunction(); // Calls Derived class function

    return 0;
}