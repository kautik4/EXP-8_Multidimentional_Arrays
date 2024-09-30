//Name:Kautik Verma
//PRN:23070123073
//Aim:Implemention of 2D Arrays - Matrices to Transpose of Matrices
//Exp-8.4
#include <iostream>
using namespace std;

int main() {
 int i, j, r, c;
 int B[3][3];
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    if (r != c) {
        cout << "Matrix is not a square matrix." << endl;
        return 0;
    }
    int A[r][c];
   
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            cout << "Enter element at position (" << i+1 << ", " << j+1 << "): ";
            cin >> A[i][j];
        }
    }
cout << endl;
cout << "The Tranpose of matrix is: "<<endl;
for(int i = 0;i<3;i++)
{
    for(int j = 0;j<3;j++)
    {
        B[i][j] = A[j][i];
        cout << B[i][j] << " ";
    }
    cout << endl;
}

    return 0;
}


/*Output:
The Original matrix is:
1 2 3 
4 5 6 
7 8 9 

The Tranpose of matrix is: 
1 4 7 
2 5 8 
3 6 9 */
