#ifndef BANK_USER_H
#define BANK_USER_H


#include<iostream>
#include<string>

class BankUser {

private:
  int id;
  std::string name;
  std::string phoneNumber;
  std::string pin;

public:
  BankUser::BankUser(int id, std::string username, std::string phoneNumber, std::string pin);

  int getId();
  std::string getName();
  std::string getPhone();
  void setId();
  void setName(std::string newName);
  void setPhoneNumber(std::string newPhoneNumber);
  void setPin(std::string newPin);

};

#endif 
