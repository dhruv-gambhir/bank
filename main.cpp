#include <iostream>

int main() {
  std::cout << "Welcome to the Bank\n Please Enter your Account Number\n Press n to open an account\n Press e to exit\n";
  std::string response;
  std::cin>>response;
  switch(response){
    case "n":
      std::cout<<"Opening an account";
      break;
    case "e":
      std::cout<<"Exiting";
      break;
    default:
      checkAccount();
  }
}