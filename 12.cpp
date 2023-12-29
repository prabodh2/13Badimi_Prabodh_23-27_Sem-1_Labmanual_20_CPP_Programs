#include <iostream>
using namespace std;

int main()
{
    // Define the matrix dimensions
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // Declare a 2D array (matrix)
    int matrix[rows][cols];

    // Input matrix elements
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and display the sum of elements in each row
    cout << "Sum of elements in each row:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j)
        {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    return 0;
}
