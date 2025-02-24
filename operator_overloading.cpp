#include <iostream>

using namespace std;

class complex{

    double a ;
    double b ;

    public:
    complex(double a, double b){

        this ->a=a;
        this ->b=b;
    }
    void show_data(void){

        cout<<" a+ib = "<< a<<" + i"<<b<<endl;
        }

        complex operator+(const complex g){

            complex c(0,0);
            c.a=a+g.a;
            c.b =b+g.b;
            return c;

        }
};

int main(){

    complex c1(4.6,6), c2(9,5.5),c3(0,0);

    c1.show_data();
    c2.show_data();
    c3=c1+c2;

    c3.show_data();

    return 0;
}