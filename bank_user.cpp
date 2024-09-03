#include "bank_user.h"

BankUser::BankUser(int id, std::string name, std::string phoneNumber, std::string pin ) : id(id), name(name), phoneNumber(phoneNumber) {
    setPin(pin);
}

int BankUser::getId() { return id; }

std::string BankUser::getName(){return name;}

std::string BankUser::getPhone(){
    int len = phoneNumber.length();

    if (len < 3) {
        return phoneNumber;  
    }

    std::string maskedPhone(len - 3, '*');
    maskedPhone += phoneNumber.substr(len - 3); 

    return maskedPhone;
}

void BankUser::setName(std::string newName) {
    this->name = newName;
}

void BankUser::setPhoneNumber(std::string newPhoneNumber){
    this->phoneNumber = newPhoneNumber;
}

void BankUser::setPin(std::string newPin){
    if (newPin.length() == 6 && std::all_of(newPin.begin(), newPin.end(), ::isdigit)) {
        pin = newPin; 
    } else {
        throw std::invalid_argument("PIN must be exactly 6 digits long.");
    }
}






