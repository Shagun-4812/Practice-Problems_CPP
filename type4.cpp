#include<iostream>

using namespace std;

class Base{
    public:
    void fun1()
{
    cout<<"Function of base class"<<endl;
}
};
class Derived:public Base{
    public:
    using Base :: fun1;
    void fun1()
{
    cout<<"Function of derived class"<<endl;    
}
void fun1(int a)
{
    cout<<"Function of derived class with value of a"<<a<<endl;
}  
    
};

int main(){
    Base b;
    Derived d;
    b.fun1();
   //overriding
    d.fun1();

    d.fun1(5);
    return 0;
}