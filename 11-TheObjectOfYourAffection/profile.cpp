#include <iostream>
#include <string>
#include <vector>
#include "profile.hpp"

Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns, std::vector<std::string> new_hobbies)
  : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns), hobbies(new_hobbies) {}

std::string Profile::view_profile() {
  std::string bio = "Name: " + name + "\n";
  bio += "Age: " + std::to_string(age) + "\n"; 
  bio += "Pronouns: " + pronouns + "\n"; 
  bio += "Hobbies:\n";
  for (int i = 0; i < hobbies.size(); i++) {
    bio += std::to_string(i + 1) + ". " + hobbies[i] + "\n";
  }
  return bio;
}

void Profile::add_hobby(std::string new_hobby) {
  hobbies.push_back(new_hobby);
}


 3