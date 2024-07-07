#include "manager.h"
#include <iostream>
#define endl " \n"

int AccountManager::createAccount(User user, int balance) {

  std::string accountNumber = std::to_string(rand());
  std::cout << "Account created for " << user.name << endl;
  Account account(balance, user);
  accounts[user.phoneNumber] = Account::account;
  return 0;
}