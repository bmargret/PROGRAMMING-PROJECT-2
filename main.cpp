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

