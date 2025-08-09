#include <iostream>
using namespace std;

int main() {
    int r1, r2, c1, c2;
    int m1[50][50], m2[50][50], sum[50][50];
    
    cout<<"Enter the number of rows of Matrix-1: ";
    cin>>r1;
    cout<<"Enter the number of columns of Matrix-1: ";
    cin>>c1; 
    cout<<"Enter the number of rows of Matrix-2: ";
    cin>>r2;
    cout<<"Enter the number of columns of Matrix-2: ";
    cin>>c2; 
    
    if (r1==r2 & c1==c2){
    cout<<"Enter the elements of the matrix 1: ";
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
        cin>>m1[i][j];
        }
    }
    
    cout<<"Enter the elements of the matrix 2: ";
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
        cin>>m2[i][j];
        }
    }    
    }
    
    cout<<"Matrix-1: "<<endl;
    for (int i=0; i<r1; i++){
        for (int j=0; j<c1; j++){
        cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
        
    cout<<"Matrix-2: "<<endl;
    for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
        cout<<m2[j][j]<<" ";
        }
        cout<<endl;
    }
        
        
    if (r1==r2 & c1==c2){
        for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
        sum[i][j]=m1[i][j]+m2[i][j];
        }
    }
    cout<<endl;
    cout<<"The addition of the 2 matrices: "<<endl;
     for (int i=0; i<r2; i++){
        for (int j=0; j<c2; j++){
            cout<<sum[i][j]<<" ";
        }
    cout<<endl;
    }
    }
    else{
        cout<<"The number of rows and columns of the 2 matrices don't match.";
    }
}

/*
Output:
Enter the number of rows of Matrix-1: 3
Enter the number of columns of Matrix-1: 3
Enter the number of rows of Matrix-2: 3
Enter the number of columns of Matrix-2: 3
Enter the elements of the matrix 1: 1 2 3 4 5 6 7 8 9
Enter the elements of the matrix 2: 6 7 8 9 5 3 4 2 1
Matrix-1: 
1 2 3 
4 5 6 
7 8 9 
Matrix-2: 
6 5 1 
6 5 1 
6 5 1 

The addition of the 2 matrices: 
7 9 11 
13 10 9 
11 10 10
*/
