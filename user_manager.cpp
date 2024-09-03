#include "user_manager.h"

UserManager::UserManager(int currentUsers, std::vector<BankUser> userArray) : currentUsers(currentUsers), userArray(userArray) {} 

int UserManager::getCurrentUsers() {
    return currentUsers;
}

void UserManager::addUser(BankUser newUser) {
    currentUsers++;
    userArray.push_back(newUser);
}