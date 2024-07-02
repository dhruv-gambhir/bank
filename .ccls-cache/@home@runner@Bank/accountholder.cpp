#include "account.cpp"
#include <iostream>
#include <string>
#include <vector>

class AccountHolder {
private:
  std::string name;
  std::string address;
  std::string email;
  std::string phoneNumber;
  std::vector<Account> accounts;

public:
  AccountHolder(std::string name, std::string address, std::string email,
                std::string phoneNumber);
  void getAccountHolderInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Address: " << address << std::endl;
    std::cout << "Email: " << email << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
  }
};