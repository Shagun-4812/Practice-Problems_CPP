#include <iostream>
using namespace std;

class MyClass {
private:
    const int constMember;
public:
    MyClass(int value) : constMember(value) {}

    int getConstMember() const {
        return constMember;
    }

    void modifyConstMember(int newValue) {
        int* modifiablePtr = const_cast<int*>(&constMember);
        *modifiablePtr = newValue;
    }

    void display() const {
        cout << "constMember: " << constMember << endl;
    }
};

int main() {
    MyClass obj(10);

    cout << "Before modification:" << endl;
    obj.display();

    obj.modifyConstMember(20);

    cout << "After modification:" << endl;
    obj.display();

    return 0;
}