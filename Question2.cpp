#include <iostream>
using namespace std;

class ClassA {
public:
    void showA() {
        cout << "ClassA show function" << endl;
    }
};

class ClassB {
public:
    void showB() {
        cout << "ClassB show function" << endl;
    }
};

int main() {
    ClassA objA;
    ClassB objB;

    ClassB* bPtrStatic = static_cast<ClassB*>(&objA);
    bPtrStatic->showB();

    ClassB* bPtrReinterpret = reinterpret_cast<ClassB*>(&objA);
    bPtrReinterpret->showB();

    return 0;
}