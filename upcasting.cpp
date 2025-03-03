#include<iostream>

using namespace std;

class base{
    public:
    int a=4;
    
};
class derived:public base{
    public:
    int b=5;
    int c=10;
   
};

int main(){
    base ob;
    base* obptr=&ob;
    cout<<"Base class pointer calling base class function"<<obptr->a<<endl; 

    derived od;
    derived* odptr=&od;
//obptr= odptr;// upcasting// implcit typecasting is allowed here
    cout<<"value of a "<<obptr->a<<endl;

    //downcasting
    odptr=(derived*)obptr;// explicit typecasting
    cout<< " value of a :"<<odptr->a<<endl;
    cout<<"values of b and c is derived class"<<odptr->b <<" " <<odptr->c<<endl;
    return 0;   


}
