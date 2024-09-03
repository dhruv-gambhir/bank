#include "account_manager.h"
#include <iostream>
using namespace std;

void checkAccount() { std::cout << "Account have"; }

int main() {

  string name;
  string phone;
  string pin;


  while (true) {
    cout << "Welcome to the Bank. Please select an option.\n\n 1. Existing "
            "User\n 2. New User\n 3. Exit\n";
    int response;
    cin >> response;
    switch (response) {
    case 1:
      cout << "Enter name";
      cin >> name;
      cout << "Enter phone number";
      cin >> phone;
      cout << "Enter a six digit pin";
      cin >> pin;
      break;

    case 2:
      cout << "Enter name";
      cin >> name;
      cout << "Enter phone number";
      cin >> phone;
      cout << "Enter a six digit pin";
      cin >> pin;
    }
    std::cout << "\n*******************\n\n";
  }
}
