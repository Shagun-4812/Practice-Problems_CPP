#include<iostream>
using namespace std;
#include <string>

class university{
   // string name;
  //  int id;
    public:
    virtual void display(){
       // cout<<" name: "<<name<<" and id: "<<id<<endl;

       cout<<"Welcome to university class"<<endl;
    }
};

class student : public university{
    
    public:
    void display(){
        cout<<"Welcome to student class"<<endl;
    }
   
};

int main(){

    university *o1;

    university ob;

    o1=&ob;
    student* s1;

    student sb1;
    s1=&sb1;
    o1->display();
    s1->display();

    s1 = (student*)o1;

    o1=s1;// upcasting//dynamic binding
    o1->display();// dynamic binding
    sb1.display();//static binding
    ob.display();//static binding
    s1->display();
    return 0;
}