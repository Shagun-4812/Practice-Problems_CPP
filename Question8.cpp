#include <iostream>
using namespace std;

class Base {
protected:
    void protectedFunction() {
        cout << "Base class protected function" << endl;
    }
};

class Derived : public Base {
public:
    using Base::protectedFunction; // Change access level to public
};

int main() {
    Derived derivedObj;
    derivedObj.protectedFunction(); // Call the function using an object of the derived class

    return 0;
}