#include <iostream>
using namespace std;

int main() {
    // Define a lower triangular matrix
    int A[4][4] = {
        {1, 0, 0, 0},
        {2, 3, 0, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 10}
    };

    // Create a 1D array to store the elements of the triangular matrix
    int B[10]; // Size will be n(n+1)/2 for n = 4

    // Index for 1D array
    int index = 0;

    // Store the elements of triangular matrix into 1D array
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            B[index] = A[i][j];
            index++;
        }
    }

    // Output the array B
    cout << "Array B: ";
    for (int i = 0; i < index; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    // Locate element A32
    int row = 3, col = 2; // A32
    int location = (row * (row - 1)) / 2 + col - 1; // Index calculation
    cout << "A32 is located at index " << location << " in array B, and its value is: " << B[location] << endl;

    return 0;
}
