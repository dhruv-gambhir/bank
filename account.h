#include <string>

struct BankUser {
  std::string name;
  std::string phoneNumber;
  std::string password;
};

class Account {

private:
  std::string accountNumber;
  float balance;
  BankUser user;
  void setBalance(int balance);
public:
  Account(std::string accountNumber, float balance);
  std::string getAccountNumber();
  float getBalance();
};
