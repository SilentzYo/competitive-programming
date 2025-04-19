#include <bits/stdc++.h>
using namespace std;

vector<string> wonTeams;

int winnableTeam (char a, char b, char c) {
    string winTeam = "";
    if (a == b && b == c) {
        winTeam = string(1,a);
    } else if (a == b) {
        winTeam = (((int)a > (int)c) ? (string(1,c)+a) : (string(1,a)+c));
    } else if (a == c) {
        winTeam = (((int)a > (int)b) ? (string(1,b)+a) : (string(1,a)+b));
    } else if (b == c) {
        winTeam = (((int)b > (int)c) ? (string(1,c)+b) : (string(1,b)+c));
    }
    for (string s : wonTeams) {
        if (s == winTeam) {
            return 0;
        }
    }
    wonTeams.push_back(winTeam);
    return 0;
}

int main() {
	freopen ("tttt.in","r",stdin);
    freopen ("tttt.out","w",stdout);
    vector<string> board(3); cin >> board[0] >> board[1] >> board[2];
    for(int i = 0; i < 3; i++) {
        winnableTeam(board[i][0], board[i][1], board[i][2]);
    }
    for(int j = 0; j < 3; j++) {
        winnableTeam(board[0][j], board[1][j], board[2][j]);
    }
    winnableTeam(board[0][0], board[1][1], board[2][2]);
    winnableTeam(board[0][2], board[1][1], board[2][0]);
    int individual = 0, team = 0;
    for(string s : wonTeams) {
        if(s.length() == 1) {
            individual++;
        } else if (s.length() == 2) {
            team++;
        }
    }
    cout << individual << "\n" << team;
    return 0;
}
