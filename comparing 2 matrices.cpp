#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    int m1[50][50], m2[50][50];
    bool areEqual = true;

    cout << "Enter the number of rows of Matrix-1: ";
    cin >> r1;
    cout << "Enter the number of columns of Matrix-1: ";
    cin >> c1;
    cout << "Enter the number of rows of Matrix-2: ";
    cin >> r2;
    cout << "Enter the number of columns of Matrix-2: ";
    cin >> c2;

    if (r1 != r2 || c1 != c2) {
        cout << "Matrices cannot be compared." << endl;
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

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (m1[i][j] != m2[i][j]) {
                areEqual = false;
                break;
            }
        }
        if (!areEqual)
            break;
    }

    if (areEqual) {
        cout << "The matrices are identical." << endl;
    } else {
        cout << "The matrices are different." << endl;
    }

    return 0;
}

/*
Output 1:
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter the number of rows of Matrix-2: 3
Enter the number of columns of Matrix-2: 3
Enter the elements of Matrix-1:
1 2 3 4 5 6 7 8 9
Enter the elements of Matrix-2:
1 2 3 4 5 6 7 8 9
The matrices are identical.


Output 2:
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter the number of rows of Matrix-2: 4
Enter the number of columns of Matrix-2: 3
Matrices cannot be compared.

Output 3:
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter the number of rows of Matrix-2: 3
Enter the number of columns of Matrix-2: 3
Enter the elements of Matrix-1:
1 2 3 4 5 6 7 8 9
Enter the elements of Matrix-2:
1 2 2 4 5 6 7 8 9
The matrices are different.
  */
