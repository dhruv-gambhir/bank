class Account {

private:
  int accountNumber;
  int balance;

public:
  Account(int accountNumber, int balance);
  int getAccountNumber() { return accountNumber; }
  int getBalance() { return balance; }
};
