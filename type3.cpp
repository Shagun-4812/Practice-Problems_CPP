#include<iostream>
using namespace std;

class A{
    public:
    int a;
};
class B
{
    public:
    int b;
};
// casting of unrelated classes wont work
int main()
{
    A* oa;
    B* ob;

    oa= (A*)ob;
    oa->a=10;
    cout<<" Value of a" <<oa->a<<endl;
return 0;

}