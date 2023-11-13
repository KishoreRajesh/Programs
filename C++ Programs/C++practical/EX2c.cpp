#include <iostream>

using namespace std;

int main() {
    const int maxRows = 100;
    const int maxCols = 100;
    int matrix[maxRows][maxCols];
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    int diagonalSum = 0;
    for (int i = 0; i < min(rows, cols); ++i) {
        diagonalSum += matrix[i][i];
    }
    cout << "Matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Sum of diagonal elements: " << diagonalSum << endl;

    return 0;
}
