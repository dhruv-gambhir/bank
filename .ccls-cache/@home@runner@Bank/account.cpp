#include "account.h"

Account::Account(int accountNumber, int balance) {
  this->accountNumber = accountNumber;
  this->balance = balance;
}

int Account::getAccountNumber() { return accountNumber; }
int Account::getBalance() { return balance; }
void Account::setBalance(int balance) { this->balance = balance; }
