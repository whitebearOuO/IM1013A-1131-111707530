#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// function
void rand_array(int row, int col, int array2D[row][col]);
void print_array(int row, int col, int array2D[row][col]);
void transpose_matrix(int row, int col, int array2D[row][col], int transposedArray[col][row]);
void multiply_matrices(int rowA, int colA, int matrixA[rowA][colA], int rowB, int colB, int matrixB[rowB][colB], int result[rowA][colB]);

int main()
{
    /*
    enter the dimensions of two matrices(matrix A and matrix B)
    random numbers

    options:
    1.transpose a matrix
        prompt the user to select which matrix (a or B) to transpose
        display the transpose matrix
    2.multiply the matrices
        check if the matrices can be multiplied (conformity check)
        if they can be multiplied, caculate and display the resulting matrix
        if they cannot be multiplied, display an approritate error message
    3.exit the program
    */

   int rowA, colA, rowB, colB;
   // input for Matrix A
    while (1)
    {
        printf("Enter dimensions of Matrix A (rows and columns): ");
        if (scanf("%d%d", &rowA, &colA) != 2 || rowA <= 0 || colA <= 0)
        {
            printf("Invalid input. Please enter positive integers for rows and columns.\n");
            // clear input buffer
            while (getchar() != '\n');
        } 
        else
            break;
    }
    int matrixA[rowA][colA];
    rand_array(rowA, colA, matrixA);
    printf("Matrix A:\n");
    print_array(rowA, colA, matrixA);
    printf("\n");

    // input for Matrix B
    while (1)
    {
        printf("Enter dimensions of Matrix B (rows and columns): ");
        if (scanf("%d%d", &rowB, &colB) != 2 || rowB <= 0 || colB <= 0) // scanf get 2 interger, row and col>0
        {
            printf("Invalid input. Please enter positive integers for rows and columns.\n");
            // clear input buffer
            while (getchar() != '\n');
        } 
        else
            break;
    }
    int matrixB[rowB][colB];
    rand_array(rowB, colB, matrixB);
    printf("Matrix B:\n");
    print_array(rowB, colB, matrixB);
    printf("\n");

    int choose;
    while(1)
    {
        // menu
        printf("Select an operation:\n");
        printf("1. Transpose a Matrix\n");
        printf("2. Multiply Matrices\n");
        printf("3. Exit\n");

        printf("> ");
        scanf("%d", &choose);
        if(choose==3)
        {
            printf("Program exited.\n");
            break;
        }

        int matrix=0;
        switch(choose)
        {
            case 1:
                printf("Select Matrix to Transpose (1 for A, 2 for B): ");
                scanf("%d", &matrix);
                if (matrix == 1)
                {
                    int transposedA[colA][rowA];
                    transpose_matrix(rowA, colA, matrixA, transposedA);
                    printf("Transposed Matrix A:\n");
                    print_array(colA, rowA, transposedA);
                    printf("\n");
                }
                else if (matrix == 2)
                {
                    int transposedB[colB][rowB];
                    transpose_matrix(rowB, colB, matrixB, transposedB);
                    printf("Transposed Matrix B:\n");
                    print_array(colB, rowB, transposedB);
                    printf("\n");
                }
                else
                    printf("here is no this option :<\n");
                break;

            case 2:
                if (colA != rowB)
                    printf("Matrices cannot be multiplied because dimension not match.\n");
                else
                {
                    int result[rowA][colB];
                    multiply_matrices(rowA, colA, matrixA, rowB, colB, matrixB, result);
                    printf("Result of Matrix: A x Matrix B:\n");
                    print_array(rowA, colB, result);
                    printf("\n");
                }
                break;

            default:
                printf("here is no this option :<\n");
                break;
        }
    } 
}

// function
// function to initialize a 2D array with random values
void rand_array(int row, int col, int array2D[row][col])
{
    srand(time(NULL)); // set the random seed
    for(int i = 0; i < row; i++) // iterate over each row
    {
        for(int j = 0; j < col; j++) // iterate over each column
        {
            array2D[i][j] = rand() % 9 + 1; // random value between 1 and 9 to each element
        }
    }
}

// function to print a 2D array
void print_array(int row, int col, int array2D[row][col])
{
    for(int i = 0; i < row; i++) // iterate over each row
    {
        for(int j = 0; j < col; j++) // iterate over each column
        {
            printf("%d ", array2D[i][j]); // print each element followed by a space
        }
        printf("\n"); // print a newline after each row
    }
}

// function to transpose a 2D array
void transpose_matrix(int row, int col, int array2D[row][col], int transposedArray[col][row])
{
    for (int i = 0; i < row; i++) // iterate over each row of the original matrix
    {
        for (int j = 0; j < col; j++) // iterate over each column of the original matrix
        {
            transposedArray[j][i] = array2D[i][j]; // assign the transposed value to the new matrix
        }
    }
}

// function to multiply two matrices
void multiply_matrices(int rowA, int colA, int matrixA[rowA][colA], int rowB, int colB, int matrixB[rowB][colB], int result[rowA][colB])
{
    for (int i = 0; i < rowA; i++) // iterate over each row of matrix A
    {
        for (int j = 0; j < colB; j++) // iterate over each column of matrix B
        {
            result[i][j] = 0; // initialize the result element to 0
            for (int k = 0; k < colA; k++) // iterate over each column of matrix A
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j]; // calculate result
            }
        }
    }
}