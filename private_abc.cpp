#include <iostream>
#include <string>


using namespace std;

class employee{
    
    // here the  main idea is that with private all the data members of the base class becoime a  private ember so the child class hence to access the public methof o f the base class u have to aaccessit through the poublic method

    public:
    int id;
    int salary;
    string name;

    void get_values(void){

        cout<<" id: "<< id<<" salary : "<< salary<< " name : "<< name <<endl;
    }

    employee(int id, int salary, string name){

        this->id=id;
        this->salary=salary;
        this->name=name;
    }

};

class engineer : private employee{// engineer has access to all th epublic data men=mber ad methids

    public:

    string skill;
    
    engineer(int id, int salary, string name, string skill): employee(id,salary,name){
        this->skill=skill;
    
    }

    void get_2(void){

        get_values();

        cout<<" skills: "<< skill<<endl;
    }

};

int main(){

    engineer e1(1,50000," Ramesh", " Programming");
    
    e1.get_2();
    return 0;
}