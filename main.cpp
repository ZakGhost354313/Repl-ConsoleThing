

//    ______   ______   .__   __.      _______.  ______    __      
//   /      | /  __  \  |  \ |  |     /       | /  __  \  |  |     
//  |  ,----'|  |  |  | |   \|  |    |   (----`|  |  |  | |  |     
//  |  |     |  |  |  | |  . `  |     \   \    |  |  |  | |  |     
//  |  `----.|  `--'  | |  |\   | .----)   |   |  `--'  | |  `----.
//   \______| \______/  |__| \__| |_______/     \______/  |_______|
//                                                                 


#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>
#include "includes.cpp"

int main() {
  getSecrets();
  title();
  std::string username;
  std::string password;
  std::cout << "Username:\n";
  std::cin >> username;
  std::cout << "\nPassword:\n";
  std::cin >> password;
  bool login = checkLogin(username, password);
  if (login == true) {
    std::cout << "Login successful\n";
  } else if (login == false) {
    std::cout << "Login unsuccessful\n";
  } else {
    error("login");
  }
}
