#include <iostream>
#include <string>
#include <vector>
#include "Marketing.hpp"
#include "Sales.hpp"

using std::string;
using std::vector;

int main() {
    vector<string> marketingMembers = {
        "Avery", "Blake", "Morgan", "Kai", "    vector<string> marketingMembers = {
        "Avery", "Blake", "Morgan", "Kai", "Jules"
    };
    vector<string> salesMembers = {
        "Dylan", "Skylar", "Reese", "Jordan", "Taylor"
    };Jules"
    };
    vector<string> salesMembers = {
        "Dylan", "Skylar", "Reese", "Jordan", "Taylor"
    };

  Marketing::Team marketingTeam("Stellar Corp", marketingMembers, 50000);
  marketingTeam.addMember("Scott");
  marketingTeam.addMember("Nicole");
  marketingTeam.addMember("Artem");

  Sales::Team salesTeam("Stellar Corp", salesMembers, "London");
  salesTeam.addMember("Pratik");
  salesTeam.addMember("Emily");
  salesTeam.addMember("Clive");

  salesTeam.printTeamDetails();
  salesTeam.setLocation("New York");
  salesTeam.printTeamDetails();

  namespace audit = Marketing::Support;

  audit::auditTeam(marketingTeam);

 return 0;
}
