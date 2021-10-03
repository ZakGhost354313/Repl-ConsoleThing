#include <stdlib.h>
#include <iostream>
#include <string>
#include <cmath>

//obviously gets secrets
void getSecrets() {
  char* ZakU = getenv("ZakU");
  char* ZakP = getenv("ZakP");
}

//checks if user and pass are correct
bool checkLogin(user, pass) {
  if (user == ZakU) {
    if (pass == ZakP) {
      return true;
    }
    else {
      return false;
    }
  } else if (user == demoU) {
    if (pass == demoP) {
      return true;
    } else {
      return false;
    }
  }else {
    return false;
  }
  if (user == null && pass == null) {
    return false;
  }
}

//error function, for easy error logging
void error(type) {
  if (type == 'login') {
    std::cout << 'Login Error\n Get Help\n';
  }else if (type == 'error') {
    std::cout << 'Error\n Get Help\n';
  }
}
