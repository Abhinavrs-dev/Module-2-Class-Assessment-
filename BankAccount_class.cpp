
#include <iostream>
using namespace std;

class BankAccount {
private:
    long accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(long no, string holder, double amt) {
        accountNumber = no;
        accountHolder = holder;
        balance = amt;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
        else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b1(123456, "Abhinav", 5000);

    b1.deposit(2000);
    b1.withdraw(1000);
    b1.displayBalance();

    return 0;
}
