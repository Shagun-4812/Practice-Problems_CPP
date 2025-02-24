#include <iostream>

using namespace std;
class stack{

    private:

    int* arr;
    int capacity;
    int top;

    public:

    stack(int size){

        capacity=size;
        arr= new int[capacity];
        top=-1;
        cout<<"Stack of the size:  "<<capacity<<" has been created";


    }

    void pop(void){

        if(top==-1){

            cout<<"Stack underflow"<< endl;
            return;

        }
        top=top-1;

    }

    void push(int value){

        if(top==capacity-1){
            cout<<" Stack Overflow "<<endl;
            return;
        }
        arr[++top]=value;
    }
    int top_element(void){

        if(top==-1){
          cout<<" Stack underflow "<<endl;  
          return 0;
        }

        return arr[top];
    }

    void peek(void){

        if(top==-1){
            cout<<"Stack underflow"<< endl;
            return;
        }
        cout<<"Elements in the stack: ";
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~stack(){

        delete[] arr;

          cout<<" Memory freed "<<endl; 
          }

};

int main(){

    stack s1(6);
    s1.pop();

    s1.push(4);
    s1.push(14);
    s1.push(45);
    s1.push(55);
    s1.push(957);

    cout<<" Top element "<< s1.top_element()<<endl;

    s1.peek();

    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    return 0;
}
