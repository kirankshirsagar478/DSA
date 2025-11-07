#include <iostream>
using namespace std;

int main() {

    // -------------------------------
    // 🔹 1D Array Example
    // -------------------------------
    int n; // size of the array
    cout << "Enter number of elements in 1D array: ";
    cin >> n;

    int arr[n]; // declaring array of size n

    // Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output elements
    cout << "\nElements in the array are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Length and index info
    cout << "\n\nLength of array: " << n << endl;
    cout << "First index: 0" << endl;
    cout << "Last index: " << n - 1 << endl;
    cout << "Last element: " << arr[n - 1] << endl;

    // Example: Find sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum of elements = " << sum << endl;

    // -------------------------------
    // 🔹 2D Array Example
    // -------------------------------
    int rows, cols;
    cout << "\nEnter number of rows and columns for 2D array: ";
    cin >> rows >> cols;

    int matrix[10][10]; // 2D array (max size 10x10 for simplicity)

    cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the matrix
    cout << "\nMatrix is:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Example: Print last element
    cout << "\nLast element of matrix: " << matrix[rows - 1][cols - 1] << endl;

    // Example: Sum of all elements in matrix
    int total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += matrix[i][j];
        }
    }
    cout << "Sum of all matrix elements = " << total << endl;

    return 0;
}
