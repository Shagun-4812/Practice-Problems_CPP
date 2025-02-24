#include <iostream>
using namespace std;

class Distance_fi{
    private:
    int a; 
    int b; 
    int c; 
    public:
    void set_values(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void get_values(void){
        cout << "Equation: " << a << "x^2 + " << b << "x + " << c << endl;
    }

    static void count_access(void){
        cout << "The value of count is " << count << endl;
    }

    void Sum_function(Distance_fi c1, Distance_fi c2){
        this->a = c1.a + c2.a;
        this->b = c1.b + c2.b;
        this->c = c1.c + c2.c;
    }

    static int count; // Declare static member count
};

int Distance_fi::count = 0; // Define static member count

int main(){
    Distance_fi p1, p2, sum;
    p1.set_values(4, 5, 3);
    p1.get_values();
    p2.set_values(5, 5, 2);
    p2.get_values();
    Distance_fi::count_access();
    sum.Sum_function(p1, p2);
    sum.get_values();
    return 0;
}
