#include <iostream>
using namespace std;

int main() {
    int i, j, r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    if (r != c) {
        cout << "Matrix is not a square matrix." << endl;
        return 0;
    }
    int arr[r][c];
   
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> arr[i][j];
        }
    }
    int sum = 0;    
    for(i = 0; i < r; i++) {
        sum += arr[i][i];
    }
    cout << "The sum of diagonal elements of the matrix: " << sum << endl;
    return 0;
}
/*
Enter number of rows: 2
Enter number of columns: 2
Enter element at position (1, 1): 1
Enter element at position (1, 2): 2
Enter element at position (2, 1): 1
Enter element at position (2, 2): 2
The sum of diagonal elements of the matrix: 3
*/