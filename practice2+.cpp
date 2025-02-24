#include <iostream>
#include <string>

using namespace std;

class employee {
private:
    string name;
    int age;
    int salary;

    void disp() {
        cout << "GM " << endl;   
    }
public:
    void set_values(string n, int a, int s) {
        this->name = n;
        this->age = a;
        this->salary = s;
    }
    void get_values() {
        cout<<this;
        disp(); // Call to the private function
        cout << "The values inside the variable are: Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
    }
};

int main() {
    employee e1;
    e1.set_values("Hari", 30, 50000);
    e1.get_values();

   
    cout << "The address of the object e1 is: " << &e1 << endl;

    return 0;
}
