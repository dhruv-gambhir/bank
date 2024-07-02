#include "account.h"
#include <string>
#include <unordered_map>

class AccountManager {
private:
  std::unordered_map<std::string, Account> accounts;

public:
  int createAccount();
};