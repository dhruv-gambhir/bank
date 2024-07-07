#include "account.h"

Account::Account(std::string accountNumber, float balance) {
  this->accountNumber = accountNumber;
  this->balance = balance;
}

std::string Account::getAccountNumber() { return accountNumber; }
float Account::getBalance() { return balance; }
void Account::setBalance(int balance) { this->balance = balance; }
