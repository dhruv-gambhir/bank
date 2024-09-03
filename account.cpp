#include "account.h"

Account::Account(std::string accountNumber, float balance = 0) : accountNumber(accountNumber), balance(balance) {};

std::string Account::getAccountNumber() { return accountNumber; }

float Account::getBalance() { return balance; }

void Account::setBalance(float newBalance) { this->balance = newBalance; }

void Account::addMoney(float addedAmount) {
  this->balance += addedAmount;
}

void Account::deductMoney(float deductedMoney){
  if(deductedMoney <= this->balance) {
    balance -= deductedMoney;
  } else {
    throw std::invalid_argument("Transaction Declined");
  }
}




