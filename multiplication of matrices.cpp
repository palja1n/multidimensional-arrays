#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int m1[50][50], m2[50][50], product[50][50];

    cout << "Enter the number of rows of Matrix-1: ";
    cin >> r1;
    cout << "Enter the number of columns of Matrix-1: ";
    cin >> c1;
    cout << "Enter the number of rows of Matrix-2: ";
    cin >> r2;
    cout << "Enter the number of columns of Matrix-2: ";
    cin >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible. (Columns of Matrix-1 must equal Rows of Matrix-2)" << endl;
        return 0;
    }

    cout << "Enter the elements of Matrix-1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter the elements of Matrix-2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }

    cout << "Matrix-1:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix-2:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "The multiplication of the 2 matrices:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Output:
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter the number of rows of Matrix-2: 3
Enter the number of columns of Matrix-2: 3
Enter the elements of Matrix-1:
1 2 3 4 5 6 7 8 9 
Enter the elements of Matrix-2:
9 8 7 6 5 4 3 2 1
Matrix-1:
1 2 3 
4 5 6 
7 8 9 
Matrix-2:
9 8 7 
6 5 4 
3 2 1 
The multiplication of the 2 matrices:
30 24 18 
84 69 54 
138 114 90 
  */
