#include <iostream>
#include <string>
#include "profile.hpp"

int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  Profile randall("Randy Pichardo", 20, "New York", "USA", "he/him");
  
  randall.add_hobby("Getting a raise!");
  randall.add_hobby("Gaming");
  randall.add_hobby("Getting money");
  randall.add_hobby("Coding");
  randall.add_hobby("Being Awesome");
  randall.add_hobby("SOnic");
  randall.add_hobby("Digital Art");


  std::cout << randall.view_profile();
  
}