#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() = default; // Virtual destructor for proper cleanup
};

class Derived1 : public Base {
public:
    void show() override {
        cout << "Derived1 class show function" << endl;
    }
    void derived1SpecificFunction() {
        cout << "Function specific to Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void show() override {
        cout << "Derived2 class show function" << endl;
    }
    void derived2SpecificFunction() {
        cout << "Function specific to Derived2 class" << endl;
    }
};

int main() {
    Base* basePtr = new Derived1();

    // Use dynamic_cast to safely cast base class pointer to derived class pointer
    Derived1* derived1Ptr = dynamic_cast<Derived1*>(basePtr);
    if (derived1Ptr) {
        derived1Ptr->derived1SpecificFunction(); // Calls function specific to Derived1 class
    } else {
        cout << "dynamic_cast to Derived1 failed" << endl;
    }

    // Attempt to cast to another derived class
    Derived2* derived2Ptr = dynamic_cast<Derived2*>(basePtr);
    if (derived2Ptr) {
        derived2Ptr->derived2SpecificFunction(); // This won't be called
    } else {
        cout << "dynamic_cast to Derived2 failed" << endl;
    }

    delete basePtr; // Clean up
    return 0;
}