//Calculate the sum of elements in each row of a matrix.
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Read the number of rows and columns from the user
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array to represent the matrix
    int matrix[rows][cols];

    // Read the matrix elements from the user
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    // Calculate and print the sum of elements in each row
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of elements in Row " << i + 1  << rowSum << endl;
    }
    return 0;
}