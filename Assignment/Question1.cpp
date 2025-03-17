#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }

    void derivedOnlyFunction() {
        cout << "Function specific to Derived class" << endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj; // Implicit upcasting

    basePtr->show(); // Calls Derived class show function due to polymorphism

    // Explicit downcasting using dynamic_cast
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    if (derivedPtr) {
        derivedPtr->derivedOnlyFunction(); // Calls function specific to Derived class
    } else {
        cout << "Downcasting failed" << endl;
    }

    return 0;
}