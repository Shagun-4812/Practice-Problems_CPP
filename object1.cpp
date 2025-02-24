#include <iostream>

using namespace std;

class Distance_fi{
    private:
    int feet;
    int inch;
    public:
    static int count;
    void set_values(int feet, int inch){
        this->feet= feet;
        this->inch= inch;

    }
    void get_values(void){
        cout<<"feet ->"<<feet<<"inch ->"<<inch<<"count ->"<<count<<endl;
    }
    static void count_access(void){
        cout<<" the value of count is"<<count<< endl;
    }
};

int Distance_fi:: count =0;

int main(){
 Distance_fi d1,d2;
 d1.set_values(4,5);
 d1.get_values();
 d2.set_values(5,5);
 d2.get_values();
Distance_fi :: count_access();
return 0;
}
