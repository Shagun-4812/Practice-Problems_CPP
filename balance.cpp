#include <iostream>
using namespace std;

class BankAccount {
protected:
    double balance;
public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) : balance(initialBalance) {}

    // Function to display the balance
    void showBalance() const {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : private BankAccount {
public:
    // Constructor to initialize the balance
    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}

    // Function to add interest to the balance
    void addInterest(double rate) {
        balance += balance * (rate / 100);
    }

    // Function to withdraw an amount from the balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to display the balance (indirectly accessing the base class function)
    void displayBalance() const {
        showBalance();
    }
};

int main() {
    SavingsAccount acc(5000);

    acc.addInterest(5);
    acc.displayBalance(); // Should display 5250

    acc.withdraw(1000);
    acc.displayBalance(); // Should display 4250

    return 0;
}