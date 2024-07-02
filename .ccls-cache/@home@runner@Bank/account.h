#include <string>

enum Gender { MALE, FEMALE, OTHER };

struct User {
  std::string name;
  std::string phoneNumber;
  Gender gender;
}

class Account {

private:
  int accountNumber;
  int balance;
  User user;
  

public:
  Account(int accountNumber, int balance);
  int getAccountNumber();
  int getBalance();
  void setBalance(int balance);
};
