#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    string accountNumber;

public:
    BankAccount(string acc, double bal) : accountNumber(acc), balance(bal) {}

    // Declare AccountAuditor as a friend class
    friend class AccountAuditor;
};

class AccountAuditor {
public:
    void auditAccount(const BankAccount& acc) {
        cout << "Auditing Account: " << acc.accountNumber << endl;
        cout << "Verified Balance: $" << acc.balance << endl;
    }
};

int main() {
    BankAccount myAcc("ACC-987654", 5420.75);
    AccountAuditor auditor;
    auditor.auditAccount(myAcc);

    return 0;
}
