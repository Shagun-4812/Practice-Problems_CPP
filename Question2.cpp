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

    // Correct usage: Call the functions directly on the objects
    objA.showA();
    objB.showB();

    return 0;
}