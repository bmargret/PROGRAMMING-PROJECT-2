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

