#include <iostream>
using namespace std;

class Account {
    int accountNo;
    string holderName;
    double balance;
public:
    
    Account(int accNo, string name, double bal) 
        : accountNo(accNo), holderName(name), balance(bal) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << " Transaction failed: Insufficient Balance!" << endl;
        }
    }

    void display() {

        cout << "Account No : " << accountNo << endl;
        cout << "Holder     : " << holderName << endl;
        cout << "Balance    : " << balance << endl;
    }
};

int main() {
    Account a1(450, "Hassan", 7500);  
    a1.display();

    a1.deposit(1500);
    a1.withdraw(500);

    a1.display();

    return 0;
}

