#include <iostream>

using namespace std;

 class polynomial{

    int a;
    int b;
    int c;

    public:
    void set_values(int a, int b, int c){
        this->a = a;
        this->b = b;
        this->c = c;
    }

    polynomial(int a, int b, int c){

        this->a=a;
        this->b=b;
        this->c=c;
count++;
    }
    polynomial(int a, int b){

        this->a=a;
        this->b=b;
        this->c=0;
count++;
    }
    polynomial(double a, double b, double c){

        this->a=a;
        this->b=b;
        this->c=c;
count++;
    }

    void get_values(void);

   ~polynomial(){

    cout<<" Destructor has been called"<<endl;
    }


 };

  void polynomial :: get_values(void){

cout << "Equation: " << a << "x^2 + " << b << "x + " << c <<"count :" <<count<<endl;

    }
int polynomial :: count;
    int main(){
 polynomial p5(2,3,5);
 p5.get_values();
        cout<<"inside of scope"<<endl;
        polynomial p1 (4.5,6.5,8.9);
p1.get_values();

polynomial p4(void);

        polynomial p2(5,6);  
        p2.get_values();

polynomial p3(3,4,5);
        p3.get_values();


cout<<"out of scope"<<endl;
        return 0;
    }

