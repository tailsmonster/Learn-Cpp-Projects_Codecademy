#include <iostream>

int main() {
  int dog_age = 7;

  int early_years, later_years, human_years;
  
  //first 2 years
  early_years = 21;

  //following years
  later_years = (dog_age - 2) * 4;
  
  //add the 2 to get human years
  human_years = later_years + early_years;

  std::cout << "My name is Toby! Ruff ruff. I am " << human_years << " years old in human years.\n";
  
}
