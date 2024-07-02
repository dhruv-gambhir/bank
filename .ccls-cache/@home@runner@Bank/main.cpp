#include <iostream>

int main() {
  std::cout << "Welcome to the Bank\n Please Enter your Account Number\n Press "
               "n to open an account\n Press e to exit\n";
  std::string response;
  std::cin >> response;
  if (response == 'n') {

    std::cout << "Opening an account";
  } else if {
    std::cout << "Exiting";
  } else {
    checkAccount();
  }
}
}