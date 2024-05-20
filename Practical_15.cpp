/***Create a class "Bank_Account" that contains depositor_Name,Acc_No,Acc_type,Balance as it data members. 
 * also create member function for account creation,deposit,withdraw and balance inquiry for class. 
 * Demonstrate its use in main.***/
#include <iostream>
#include <string>
using namespace std;

class Bank_Account {
private:
    string depositor_Name;
    string Acc_No;
    string Acc_type;
    double Balance;

public:
    // Constructor to initialize the Bank_Account object
    Bank_Account(string name, string accNo, string type, double balance) {
        depositor_Name = name;
        Acc_No = accNo;
        Acc_type = type;
        Balance = balance;
    }

    // Function to display account information
    void displayAccountInfo() {
        cout << "Depositor Name: " << depositor_Name << endl;
        cout << "Account Number: " << Acc_No << endl;
        cout << "Account Type: " << Acc_type << endl;
        cout << "Balance: $" << Balance << endl;
    }

    // Function to deposit money
    void deposit(double amount) {
        Balance += amount;
        cout << "Deposit successful. Updated balance: $" << Balance << endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > Balance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            Balance -= amount;
            cout << "Withdrawal successful. Updated balance: $" << Balance << endl;
        }
    }

    // Function to inquire balance
    double inquireBalance() {
        return Balance;
    }
};

int main() {
    // Create a Bank_Account object
    Bank_Account account("Ankit Vishwakarma", "1234567890", "Savings", 1000.0);

    // Display account information
    cout << "Account Information:" << endl;
    account.displayAccountInfo();
    cout << endl;

    // Deposit money
    account.deposit(500.0);

    // Withdraw money
    account.withdraw(200.0);

    // Inquire balance
    double balance = account.inquireBalance();
    cout << "Current Balance: $" << balance << endl;

    return 0;
}
