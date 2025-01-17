#include <iostream>

using namespace std;

class Account {
    static int account_number;
    int balance;

public:
    Account() {
        balance = 0;
        cout << "Account Created!!" << " Your account number is " << ++account_number << " and balance is " << balance << endl;
    }

    void deposit(int money) {
        balance += money;
        cout << "Deposit successful!!" << endl;
    }

    void withdraw(int amount) {
        balance -= amount;
        cout << "Withdrawal successful!!" << endl;
    }

    int getBalance() const {
        return balance;
    }
};

int Account::account_number = 0;

int main() {
    Account a1;
    a1.deposit(100);
    a1.withdraw(50);
    cout << "Current balance: " << a1.getBalance() << endl;

    return 0;
}
