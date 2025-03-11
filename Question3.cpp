#include <iostream>
using namespace std;

class Base {
public:
    void nonVirtualFunction() {
        cout << "Base class non-virtual function" << endl;
    }

    virtual void virtualFunction() {
        cout << "Base class virtual function" << endl;
    }
};

class Derived : public Base {
public:
    void nonVirtualFunction() {
        cout << "Derived class non-virtual function" << endl;
    }

    void virtualFunction() override {
        cout << "Derived class virtual function" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj;

    // Static binding (compile-time binding)
    basePtr->nonVirtualFunction(); // Calls Base class non-virtual function

    // Dynamic binding (run-time binding)
    basePtr->virtualFunction(); // Calls Derived class virtual function

    return 0;
}