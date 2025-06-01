#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

namespace Sales {
  class Team {
  private:
    string teamName;
    vector<string> teamMembers;
    string teamLocation;
  public:
    Team(string name, vector<string> members, string location): teamName(name), teamMembers(members), teamLocation(location) {}

    string getTeamName() const {
      return teamName;
    }
    vector<string> getMembers() const {
      return teamMembers;
    }
    void addMember(string member) {
      teamMembers.push_back(member);
    }
    string getLocation() const {
      return teamLocation;
    }
    void setLocation(string newLocation) {
      teamLocation = newLocation;
    }
    void printTeamDetails() const {
      std::cout << "Sales Team Name: " << getTeamName() << std::endl;
      std::cout << "Location: " << getLocation() << std::endl;
      std::cout << "Members: ";
      for (size_t i = 0; i < teamMembers.size(); ++i) {
        std::cout << teamMembers[i];
        if (i != teamMembers.size() - 1)
          std::cout << ", ";
      }
      std::cout << std::endl;
    }
  }; // Team class

}
