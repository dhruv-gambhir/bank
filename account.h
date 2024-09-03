#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "bank_user.h"

class Account {

private:
  std::string accountNumber;
  float balance;
  void setBalance(float balance);
public:
  Account(std::string accountNumber, float balance);
  std::string getAccountNumber();
  float getBalance();
  void addMoney(float addedAmount);
  void deductMoney(float deductedMoney);


};

#endif
