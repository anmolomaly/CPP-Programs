#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    int mat[10][10]; // limit to 10x10 for simplicity
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    int sum = 0;
    for (int j = 0; j < n; j++)
        sum += mat[0][j]; // reference sum = first row

    bool magic = true;

    // Check rows
    for (int i = 1; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
            rowSum += mat[i][j];
        if (rowSum != sum) magic = false;
    }

    // Check columns
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++)
            colSum += mat[i][j];
        if (colSum != sum) magic = false;
    }

    // Check diagonals
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        d1 += mat[i][i];
        d2 += mat[i][n - i - 1];
    }
    if (d1 != sum || d2 != sum) magic = false;

    if (magic)
        cout << "It is a Magic Square!" << endl;
    else
        cout << "Not a Magic Square." << endl;

    return 0;
}
