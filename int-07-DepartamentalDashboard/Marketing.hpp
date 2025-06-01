#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

namespace Marketing {
  class Team {
    protected:
      string teamName;
      vector<string> teamMembers;
      double teamBudget;
    public:
      Team(string name, vector<string> members, double budget): teamName(name), teamMembers(members), teamBudget(budget) {}

      string getName() const {
        return teamName;
      }

      void addMember(string member) {
        teamMembers.push_back(member);
      }

      int getMemberCount() const{
        return teamMembers.size();
      }
      double getBudget() const {
        return teamBudget;
      }
      void setBudget(double newBudget) {
        teamBudget = newBudget;
      }
  }; // Team class
  namespace Support {
    void auditTeam(Marketing::Team& team) {
      std::cout <<
      "Auditing Marketing Team: " << team.getName() << std::endl <<
      "Number of Members: " << team.getMemberCount() << std::endl <<
      "Team Budget: $" << team.getBudget() << std::endl <<
      "Audit complete!" << std::endl;
    }
  }
}
