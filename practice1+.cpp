#include <iostream>
#include <string>

using namespace std;

class student {
private:
    int marks;
    int roll_no;

    void disp(){
      cout << "GM " << endl;   
    }
public:
    void set_values(int x, int y) {
        marks = x;
        roll_no = y;
    }
    void get_values() {
        cout << "The values inside the variable are: Marks: " << marks << ", Roll No: " << roll_no << endl;
    }
    int sumsquares() {
        disp();
        return (marks * marks) + (roll_no * roll_no);
    }
};

int main() {
    student s1;
    s1.set_values(2, 18);
    s1.get_values();
    int s = s1.sumsquares();
    cout << "The sum of squares of the values is: " << s << endl;

    return 0;
}
