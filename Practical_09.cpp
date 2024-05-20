// WAP that accepts 9 number in form of matrix and display transpose of that matrix.

#include <iostream>
using namespace std;

int main() {
    // Declare a 3x3 matrix
    int matrix[3][3];

    // Accept input for the matrix
    cout << "Enter 9 numbers for the matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and display the transpose of the matrix
    cout << "Transpose Matrix:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}