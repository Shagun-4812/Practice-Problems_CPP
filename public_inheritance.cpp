#include <iostream>
#include <string>

using namespace std;

class Polynomial {
    public:
        int a2, a1, a0; 

        Polynomial(int a2 = 0, int a1 = 0, int a0 = 0) {
            this->a2 = a2;
            this->a1 = a1;
            this->a0 = a0;
        }

        void disp() {
            cout << a2 << "x^2 + " << a1 << "x + " << a0 << endl;
        }
};

class Linear {
    public:
        int a, b; 

        Linear(int a = 0, int b = 0) {
            this->a = a;
            this->b = b;
        }

        Polynomial multiply(Linear &other) {
            int a2 = this->a * other.a;
            int a1 = this->a * other.b + this->b * other.a;
            int a0 = this->b * other.b;
            return Polynomial(a2, a1, a0);
        }

        void display() {
            cout << a << "x + " << b << endl;
        }

        void displayQuadratic(Polynomial &quadratic) {
            quadratic.disp();
        }
};

int main() {
    Linear L1(2, 3);
    Linear L2(4, 5);

    Polynomial quadratic = L1.multiply(L2);
    L1.displayQuadratic(quadratic);

    return 0;
}
