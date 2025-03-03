#include <iostream>

using namespace std;
int main()
{
    int i=2;
    double d=3.5;   
int *iptr =&i;
double *dptr=&d;


iptr=(int*)dptr;// double to int// explicit typecasting
dptr=(double*)iptr;// int to double// explicit typecasting
cout<<"value of i: "<<i<<endl;
cout<<"value of d: "<<d<<endl;

}