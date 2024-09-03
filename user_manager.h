#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include <vector>
#include "bank_user.h"

class UserManager {
private:
    int currentUsers;
    std::vector<BankUser> userArray;

public:
    UserManager::UserManager(int currentUsers = 0, std::vector<BankUser> userArray = {});
    int getCurrentUsers();
    void addUser(BankUser newUser);

};



#endif