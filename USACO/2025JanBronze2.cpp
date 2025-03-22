#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    map<int, vector<int>> positions; // {number, {positions}}
    for(int i = 0; i < n; i++) {
        int number; cin >> number;
        positions[number].push_back(i);
    }

    vector<pair<int, int>> secondLastPosition, firstPosition; 
    // {secondLastPosition, numbersbefore}} and {order of apperance, firstPosition}}
    int index = positions.size();
    for (auto it = positions.rbegin(); it != positions.rend(); ++it) {
        index--;
        firstPosition.push_back({positions.size()-index, it->second[0]});
        if (it->second.size() >= 2) {
            secondLastPosition.push_back({it->second[it->second.size()-2], index});
        }
    }

    int distinctMoos = 0;
    for (const auto& [secondLastPos, numbersBefore] : secondLastPosition) {
        for (int j = numbersBefore-1; j >= 0; j--) {
            if (firstPosition[j].second < secondLastPos) {
                distinctMoos += j+1;
                break;
            }
        }
    }
    cout << distinctMoos << endl;
    return 0;
}