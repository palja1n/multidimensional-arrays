#include <iostream>
using namespace std;

int main() {
    int r, c;
    int arr[50][50];
    
    cout<<"Enter the number of rows: ";
    cin>>r;
    cout<<"Enter the number of columns: ";
    cin>>c; 
    
    cout<<"Enter the elements of the matrix: ";
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
        cin>>arr[i][j];
        }
    }
        
    cout<<"The Matrix is: "<<endl;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
        cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

/*
Output:
Enter the number of rows: 3
Enter the number of columns: 3
Enter the elements of the matrix: 1 2 3 4 5 6 7 8 9
The Matrix is: 
1 2 3 
4 5 6 
7 8 9
  */
