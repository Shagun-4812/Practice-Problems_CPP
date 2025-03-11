#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() = default; // Virtual destructor for proper cleanup
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
    void derivedFunction() {
        cout << "Derived class specific function" << endl;
    }
};

class Unrelated {
public:
    void show() {
        cout << "Unrelated class show function" << endl;
    }
};

void demonstrateCasts() {
    // Static cast
    Derived derivedObj;
    Base* basePtr = static_cast<Base*>(&derivedObj); // Upcasting
    basePtr->show(); // Calls Derived class show function due to polymorphism

    // Dynamic cast
    Base* basePtr2 = new Derived();
    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr2); // Downcasting
    if (derivedPtr) {
        derivedPtr->derivedFunction(); // Calls Derived class specific function
    } else {
        cout << "dynamic_cast failed" << endl;
    }
    delete basePtr2;

    // Reinterpret cast
    Unrelated unrelatedObj;
    Unrelated* unrelatedPtr = &unrelatedObj;
    Base* basePtr3 = reinterpret_cast<Base*>(unrelatedPtr); // Unsafe cast
    basePtr3->show(); // Undefined behavior

    // Const cast
    const int constValue = 42;
    const int* constPtr = &constValue;
    int* modifiablePtr = const_cast<int*>(constPtr);
    *modifiablePtr = 24; // Modifying const value (undefined behavior)
    cout << "Modified const value: " << *modifiablePtr << endl;
}

int main() {
    demonstrateCasts();
    return 0;
}