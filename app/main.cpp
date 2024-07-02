#include <iostream>

void checkAccount() { std::cout << "Account have"; }

int main() {
  while (true) {
    std::cout
        << "Welcome to the Bank\n Please Enter your Account Number\n Press "
           "n to open an account\n Press e to exit\n";
    std::string response;
    std::cin >> response;
    if (response == "n") {

      std::cout << "Opening an account\n";
    } else if (response == "e") {
      std::cout << "Exiting\n";
      return 0;
      std::cout << "\n*******************\n";
    } else {
      checkAccount();
    }
    std::cout << "\n*******************\n\n";
  }
}
