class Account {
protected:
    double balance;

public:
    Account(double b) : balance(b) {}

    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(double b, double rate) : Account(b), interestRate(rate) {}

    void addInterest() {
        balance += balance * interestRate;
    }
};
