#include <iostream>

using namespace std;

int main()
{
    int a =5;

    double b=6.5, c=5.5;
    cout<<"value of b: "<< b<<endl;

    b=a;// int to double//inplicit typecasting
    cout<<"value of b: "<< b<<endl;

    a=c;// double to int// implicit typecasting
    cout<< "Value of a: "<< a<< endl;


    return 0;
}