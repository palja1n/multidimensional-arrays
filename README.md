# Matrix (2D Arrays) and it's Operations in C++
# Aim: To study and implement operations on 2D arrays (matrices) in C++.

# Theory
A two-dimensional array (matrix) in C++ is an array of arrays used to represent data in a tabular format. But, stored in continuous memory location. It enables row-column-based access to elements and is commonly used for performing mathematical operations like addition, multiplication, and transpose.

# Key Features:
Declared as data_type array_name[rows][columns].  
Each element is accessed using array[i][j].  
Suitable for storing grid-like data (e.g., matrices, images).  

# Programs
# 1. 2D Array Input and Display
This program takes values for a matrix and prints them back in matrix format using nested loops

Loops Used:  
Two nested loops — one handles row traversal while the other processes each column  
Total: 2 nested loops (1 for taking input, 1 for printing output)  

# 2. Matrix Sum
This program adds two matrices of identical dimensions by adding elements at matching positions and storing them in a new matrix, otherwise it alerts the user if sizes differ

Loops Used:  
Two nested loops for reading both matrices  
Two nested loops for computing the sum and displaying it  
Total: 4 nested loops (read M1, read M2, sum, output)  

Algorithm:

Start  
Read row and column sizes for both matrices  
If sizes don’t match, display error and stop  
Input elements for both matrices  
For each position, add corresponding elements and save to a result matrix  
Show the result matrix  
End

# 3. Matrix Multiplication
This program multiplies two matrices if the column count of the first equals the row count of the second, otherwise it displays an error

Loops Used:  
Two nested loops for reading matrix values  
A set of nested loops (with an additional inner loop) to perform multiplication  
Total: 4 nested loops (input M1, input M2, multiplication, output)

Algorithm:  
Start  
Enter dimensions of both matrices  
If M1 columns ≠ M2 rows, show error and stop  
Read both matrices  
Initialize result matrix with 0  
For each row in M1  
For each column in M2  
Multiply and sum across the shared dimension  
Store in the result matrix  
Display the result  
End  

# 4. Diagonal Sum of Matrix  
This program finds the total of all diagonal elements in a square matrix; if the matrix is not square, it warns the user  

Loops Used:  
One nested loop for reading the matrix  
One loop checking positions where i == j for the diagonal  
Total: 2 nested loops  

# 5. Transpose of Matrix
This program generates the transpose of a matrix by flipping rows into columns

Loops Used:  
One nested loop for taking input  
One nested loop to assign transpose[j][i] = original[i][j]  
Total: 2 nested loops  

Algorithm:  
Start  
Read matrix dimensions  
Fill the matrix with user input  
Swap rows with columns to form the transpose  
Display the transposed matrix  
End  

# 6. Comparing Two Matrices
This program checks if two matrices are identical in both size and data; if they differ, it reports accordingly

Loops Used:  
Two nested loops for entering data into both matrices  
One nested loop for comparing each matching position  
Total: 3 nested loops  

Algorithm:  
Start  
Get dimensions for both matrices  
If sizes don’t match, show “not equal”  
Input both matrices  
Compare elements one-by-one  
If mismatch found, mark as not equal  
Show the result  
End  


# Conclusion:
We carried out essential 2D array operations such as reading and displaying data, adding matrices, multiplying matrices, calculating diagonal sums, generating transposes, and checking equality. Each operation relied on nested loops for traversing and processing matrix elements:

Input/Output, Addition, Diagonal Sum, Transpose, and Comparison: Utilized two nested loops.

Multiplication: Used a nested loop structure with an additional inner loop to handle the full matrix product calculation.
