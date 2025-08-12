#include <iostream>
using namespace std;

int main() {
    int a[10][10], trans[10][10];
    int rows, cols;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> a[i][j];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            trans[j][i] = a[i][j];

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout << trans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
