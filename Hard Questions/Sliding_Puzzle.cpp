#include <vector>
#include <queue>
#include <unordered_set>
#include <stdexcept>
#include <string>

using namespace std;

class Solution {
private:
    struct Point {
        int row;
        int col;
        Point(int r, int c) : row(r), col(c) {}
    };

    string boardToString(vector<vector<int>>& board) {
        string res;
        for (const auto& row : board) {
            for (int val : row) {
                res += to_string(val);
            }
        }
        return res;
    }

    bool isSolved(vector<vector<int>>& currState) {
        string target = "123450";  
        return boardToString(currState) == target;
    }

    Point findBlank(vector<vector<int>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == 0) {
                    return Point(i, j);
                }
            }
        }
        throw logic_error("Error: no blank found");
    }

public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string target = "123450";
        string start = boardToString(board);

        if (start == target) return 0;  

        vector<vector<int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        queue<pair<string, int>> q;
        unordered_set<string> visited;  

        q.push({start, 0});
        visited.insert(start);

        while (!q.empty()) {
            auto [current, moves] = q.front();
            q.pop();

            // Find the position of the blank (0)
            int zeroIdx = current.find('0');
            int zeroRow = zeroIdx / 3, zeroCol = zeroIdx % 3;

            for (const auto& dir : directions) {
                int newRow = zeroRow + dir[0];
                int newCol = zeroCol + dir[1];

                if (newRow >= 0 && newRow < 2 && newCol >= 0 && newCol < 3) {
                    string nextState = current;
                    swap(nextState[zeroRow * 3 + zeroCol], nextState[newRow * 3 + newCol]);

                    if (nextState == target) return moves + 1;

                    if (!visited.count(nextState)) {
                        q.push({nextState, moves + 1});
                        visited.insert(nextState);
                    }
                }
            }
        }

        return -1;  // If no solution is found
    }
};
