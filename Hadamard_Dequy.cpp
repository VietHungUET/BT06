#include <iostream>
#include <vector>

using namespace std;

void drawHadamard(vector<vector<char>>& matrix, int row, int col, int size, bool inverse) {
    if (size == 1) {
        matrix[row][col] = inverse ? 'o' : '.';
        return;
    }

    int halfSize = size / 2;


    drawHadamard(matrix, row, col, halfSize, inverse);


    drawHadamard(matrix, row, col + halfSize, halfSize, inverse);


    drawHadamard(matrix, row + halfSize, col, halfSize, inverse);


    drawHadamard(matrix, row + halfSize, col + halfSize, halfSize, !inverse);
}

void printMatrix(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char cell : row) {
            cout << cell;
        }
        cout << endl;
    }
}

int main() {
    int n;

    cin >> n;

    int size = 1 << n;  // Calculate matrix size as 2^n

   vector<vector<char>> hadamard(size, vector<char>(size, '.'));  //Khoi tao mot mang hai chieu kieu char gom cac '.'

    drawHadamard(hadamard, 0, 0, size, false);

    printMatrix(hadamard);

    return 0;
}
