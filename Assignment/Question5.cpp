#include <iostream>
using namespace std;

class UnrelatedClass {
public:
    void show() {
        cout << "UnrelatedClass show function" << endl;
    }
};

int main() {
    UnrelatedClass obj;
    UnrelatedClass* objPtr = &obj;

    // Print the original memory address
    cout << "Original memory address: " << objPtr << endl;

    // Use reinterpret_cast to cast the pointer to an int*
    int* intPtr = reinterpret_cast<int*>(objPtr);

    // Print the memory address after casting
    cout << "Memory address after reinterpret_cast: " << intPtr << endl;

    return 0;
}