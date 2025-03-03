#include<iostream>

using namespace std;

class base{
    public:
    int a;
    void display()
    {
        cout<<"Display of base class"<<endl;
    }
};
class derived:public base{
    public:
    int b=5;
    int c=10;
    void display()
    {
        cout<<"Display of derived class"<<endl;
    }
};

int main(){
    base ob;
    base* obptr=&ob;
    cout<<"Base class pointer calling base class function"<<obptr->a<<endl; 

    derived od;
    derived* odptr=&od;
    cout<<"values of b and c is derived class"<<odptr->b <<" " <<odptr->c<<endl;
    return 0;   


}