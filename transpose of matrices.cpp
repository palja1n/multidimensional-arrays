#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int mat[50][50], transpose[50][50];
    
    cout << "Enter the number of rows of the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns of the matrix: ";
    cin >> cols;
    
    if (rows==cols){
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Original Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    cout << "Transpose of the Matrix:" << endl;
    for (int i = 0; i < cols; i++) { 
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;

} 
else {
    cout << "The matrices are not transpose-compatible." << endl;
}
}

/*
Output:
Enter the number of rows of the matrix: 3
Enter the number of columns of the matrix: 3
Enter the elements of the matrix:
1 2 3 4 5 6 7 8 9
Original Matrix:
1 2 3 
4 5 6 
7 8 9 
Transpose of the Matrix:
1 4 7 
2 5 8 
3 6 9
  */
