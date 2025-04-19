#include <bits/stdc++.h>
using namespace std;

int quadrant(int i, int j, int size) {
    if (i<size/2) {
        if (j<size/2) {
            return 0;
        } else {
            return 1;
        }
    } else {
        if (j<size/2) {
            return 2;
        } else {
            return 3;
        }
    }
}

int main() {
    int size, changes, operations = 0;
    cin >> size >> changes;

    array<array<array<int, 5>, 1000>, 1000> grid; // 2D array, each point has 4 Positions
    for (int i = 0; i < size; i++) {
        string row; cin >> row;
        int x = (i<size/2) ? (i) : (size-i-1);
        for (int j = 0; j < size; j++) {
            int y = (j<size/2) ? (j) : (size-j-1);
            grid[x][y][quadrant(i,j,size)] = (row[j] == '#') ? (1) : (0);
            if (quadrant(i,j,size) == 3) {
                int paintedreflections = grid[x][y][0] + grid[x][y][1] + grid[x][y][2] + grid[x][y][3];
                operations += min(paintedreflections, 4-paintedreflections);
                grid[x][y][4] = min (paintedreflections, 4-paintedreflections);
            }
        }
    }
    cout << operations << "\n";

    while (changes--) {
        int row, column; cin >> row >> column; row--; column--;
        int x = (row<size/2) ? (row) : (size-row-1);
        int y = (column<size/2) ? (column) : (size-column-1);
        int quad = quadrant(row, column, size);
        
        grid[x][y][quad] = (grid[x][y][quad]+1)%2;
    
        int numberpainted = grid[x][y][0] + grid[x][y][1] + grid[x][y][2] + grid[x][y][3];
        int paintedreflectionsafter = min(numberpainted, 4-numberpainted);
        int paintedreflectionsbefore = grid[x][y][4];
        operations += paintedreflectionsafter-paintedreflectionsbefore;
        grid[x][y][4] = paintedreflectionsafter;
        cout << operations << "\n";
    }
    return 0;
}