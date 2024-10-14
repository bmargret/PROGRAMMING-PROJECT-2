#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    string town;
    string stadium;
};

// Function reads teams from a CSV file saved locally
vector<Team> readTeamsFromCSV(const string &filename) {
    vector<Team> teams;
    ifstream file(filename);
    string line;

    if (!file.is_open()) {
        cerr << "Error: Could not open the file.\n";
        return teams;
    }

    while (getline(file, line)) {
        stringstream ss(line);
        string name, town, stadium;

        // Read each field from the line (team name, town, stadium)
        getline(ss, name, ',');
        getline(ss, town, ',');
        getline(ss, stadium, ',');

        teams.push_back({name, town, stadium});
    }

    return teams;
}
void generateFixtures(const vector<Team> &teams) {
    vector<pair<Team, Team>> fixtures;
    int numTeams = teams.size();
    // Generate home and away fixtures
    for (int i = 0; i < numTeams; ++i) {
        for (int j = i + 1; j < numTeams; ++j) {
            if (teams[i].town != teams[j].town) {
                fixtures.push_back({teams[i], teams[j]}); // First leg
                fixtures.push_back({teams[j], teams[i]}); // Second leg
            }
        }
    }


    random_shuffle(fixtures.begin(),fixtures.end());

    int matchCount=0;
int matchCount = 0;
    int weekend = 1;

    // Display the fixtures with "weekend breaks"
    for (auto &fixture : fixtures) {
        cout << "Match: " << fixture.first.name << " (Home) vs " << fixture.second.name
             << " at " << fixture.first.stadium << " (Weekend #" << weekend << ")\n";
        matchCount++;
        if (matchCount % 2 == 0) {
            cout << "Weekend break\n";
            weekend++;
        }
    }
}

int main() {
    string filename;
