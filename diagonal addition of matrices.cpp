#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int m1[50][50], m2[50][50];
    int diagonalSum1 = 0, diagonalSum2 = 0, totalDiagonalSum = 0;

    cout << "Enter number of rows of Matrix-1: ";
    cin >> r1;
    cout << "Enter number of columns of Matrix-1: ";
    cin >> c1;
    cout << "Enter number of rows of Matrix-2: ";
    cin >> r2;
    cout << "Enter number of columns of Matrix-2: ";
    cin >> c2;

    if (r1 != c1 || r2 != c2 || r1 != r2) {
        cout << "Diagonal addition only possible for equal-sized square matrices!";
        return 0;
    }

    cout << "Enter elements of Matrix-1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter elements of Matrix-2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }

    cout << "\nMatrix-1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix-2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r1; i++) {
        diagonalSum1 += m1[i][i];
        diagonalSum2 += m2[i][i]; 
    }

    totalDiagonalSum = diagonalSum1 + diagonalSum2;

    cout << "\nSum of diagonal elements of Matrix-1: " << diagonalSum1 << endl;
    cout << "Sum of diagonal elements of Matrix-2: " << diagonalSum2 << endl;
    cout << "Total diagonal sum (Matrix-1 + Matrix-2): " << totalDiagonalSum << endl;

    return 0;
}

/*
Output 1:
Enter number of rows of Matrix-1: 2
Enter number of columns of Matrix-1: 2
Enter number of rows of Matrix-2: 2
Enter number of columns of Matrix-2: 2
Enter elements of Matrix-1:
1 2 3 4
Enter elements of Matrix-2:
6 7 8 9

Matrix-1:
1 2 
3 4 

Matrix-2:
6 7 
8 9 

Sum of diagonal elements of Matrix-1: 5
Sum of diagonal elements of Matrix-2: 15
Total diagonal sum (Matrix-1 + Matrix-2): 20

Output 2:
Enter number of rows of Matrix-1: 3
Enter number of columns of Matrix-1: 4
Enter number of rows of Matrix-2: 5
Enter number of columns of Matrix-2: 6
Diagonal addition only possible for equal-sized square matrices!
*/
