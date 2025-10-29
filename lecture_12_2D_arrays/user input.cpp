#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the 2D array: ";
    cin >> n;
    int m;
    cout << "Enter the number of columns for the 2D array: ";
    cin >> m;
    int matrix[n][m];
    cout << "Enter elements for a  matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
