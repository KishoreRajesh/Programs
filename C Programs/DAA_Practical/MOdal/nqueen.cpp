#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isSafe(vector<int>& board, int row, int col, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i] == col || abs(board[i] - col) == abs(i - row))
            return false;
    }
    return true;
}

void printSolution(vector<int>& board, int n, int solutionCount) {
    cout << "Solution " << solutionCount << ": ";
    for (int i = 0; i < n; i++) {
        cout << board[i] + 1; 
        if (i < n - 1) cout << ", ";
    }
    cout << endl;
}

void solveNQueensUtil(vector<int>& board, int row, int n, int& solutionCount) {
    if (row == n) {
        solutionCount++;
        printSolution(board, n, solutionCount);
        return;
    }
    
    for (int col = 0; col < n; col++) {
        if (isSafe(board, row, col, n)) {
            board[row] = col;
            solveNQueensUtil(board, row + 1, n, solutionCount);
            // Backtrack: No need to reset board[row] since it will be overwritten in the next iteration
        }
    }
}

void solveNQueens(int n) {
    vector<int> board(n, -1);
    int solutionCount = 0;
    solveNQueensUtil(board, 0, n, solutionCount);
    if (solutionCount == 0) {
        cout << "No solutions ";
    }
}

int main() {
    int n = 4;
    solveNQueens(n);
    return 0;
}
