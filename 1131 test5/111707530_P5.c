#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void rand_array(int square, int array2D[square][square]);
void print_array(int square, int array2D[square][square]);
void flattened(int dimension, int length, int matrix[dimension][dimension], int flattened_matrix[length]);
void menu();
void initialized(int length, int array[length]);

int main()
{
    int dimension;
    while (1)
    {
        printf("Enter the dimension of the matrix: ");
        if (scanf("%d", &dimension) != 1 || dimension<3 || dimension>10) // check input
        {
            printf("range must 3 to 10.\n");
            // clear input buffer
            while (getchar() != '\n');
        } 
        else
            break;
    }

    int matrix[dimension][dimension];
    printf("Generated %d x %d matrix:\n", dimension, dimension);
    rand_array(dimension, matrix);
    print_array(dimension, matrix);

    int choose;
    while(1)
    {
        menu();
        scanf("%d", &choose);
        if(choose==3)
        {
            printf("Program exited.\n");
            break;
        }

        // for case1
        int length;
        length=dimension*dimension;
        int new_matrix[length];
        int duplicate[length];
        initialized(length, duplicate);
        //

        switch(choose)
        {
            case 1:
                printf("\n");
                printf("Flattened matrix:\n");
                flattened(dimension, length, matrix, new_matrix);
                printf("\n");
                
                // check duplicate
                int i, j, counter_1=0, counter_2=0; // counter_1 count duplicate(array) location, counter_2 to count how many duplicate
                int control=0;
                for (i=0;i<length;i++) // interate all element in array
                {
                    for (j=i+1;j<length;j++) // interate all element after that
                    {
                        if (new_matrix[i] == new_matrix[j]) // find duplicate
                        {
                            for(int p=0;p<length;p++) // interate all element in duplicate array
                            {
                                if(duplicate[p]==new_matrix[i])
                                    control=1;
                            }
                            if(control==0) // check no same duplicate
                            {
                                duplicate[counter_1]=new_matrix[i]; // add to duplicate array
                                counter_1++; // go to duplicate array's next location
                                counter_2++; // count how many duplicate
                            }
                            control=0;
                        }
                    }
                }

                printf("Duplicated value(s):\n");
                if(counter_2>0)
                {
                    for(int i=0;i<counter_2;i++)
                        printf("%d ",duplicate[i]);
                    printf("\n");
                }
                else
                    printf("None\n");

                break;
            case 2:
                printf("\n");
                printf("Original matrix:\n");
                print_array(dimension, matrix);
                printf("\n");
                printf("Compressed matrix:\n");
                int compressed_matrix[2][2];
                int big=0;

                // up left
                for(int i=0;i<=dimension-2;i++) // iterate up left matrix row
                {
                    for(int j=0;j<=dimension-2;j++) // iterate up left matrix col
                    {
                        if(matrix[i][j]>big) // find bigest number
                            big=matrix[i][j];
                    }
                }
                compressed_matrix[0][0]=big; //put bigest number into compressed matrix
                big=0; //initalize big checker

                //up right
                for(int i=0;i<=dimension-2;i++) // iterate up right matrix row
                {
                    for(int j=1;j<=dimension-1;j++) // iterate up right matrix col
                    {
                        if(matrix[i][j]>big) // find bigest number
                            big=matrix[i][j];
                    }
                }
                compressed_matrix[0][1]=big; //put bigest number into compressed matrix
                big=0; //initalize big checker

                //down left
                for(int i=1;i<=dimension-1;i++) // iterate down left matrix row
                {
                    for(int j=0;j<=dimension-2;j++) // iterate down left matrix col
                    {
                        if(matrix[i][j]>big) // find bigest number
                            big=matrix[i][j];
                    }
                }
                compressed_matrix[1][0]=big; //put bigest number into compressed matrix
                big=0; //initalize big checker

                //down right
                for(int i=1;i<=dimension-1;i++) // iterate down right matrix row
                {
                    for(int j=1;j<=dimension-1;j++) // iterate down right matrix col
                    {
                        if(matrix[i][j]>big) // find bigest number
                            big=matrix[i][j];
                    }
                }
                compressed_matrix[1][1]=big; //put bigest number into compressed matrix

                print_array(2, compressed_matrix);

                break;
            default:
                printf("here is no this option.\n");
                break;
        }
    }


} // end main

//function
//rand all element
void rand_array(int square, int array2D[square][square])
{
    srand(time(NULL)); //random seed
    for(int i=0;i<square;i++) // iterate over each row
    {
        for(int j=0;j<square;j++) // iterate over each column
            array2D[i][j]=rand()%99+1; // random value between 1 and 99 to each element
    }
}

//print array
void print_array(int square, int array2D[square][square])
{
    for(int i=0;i<square;i++) // iterate over each row
    {
        for(int j=0;j<square;j++) // iterate over each column
        {
            if(array2D[i][j]<10)
                printf(" %d ", array2D[i][j]); // print <10 element head and followed by a space
            else
                printf("%d ", array2D[i][j]); // print >=10 element followed by a space
        }
        printf("\n"); // print a newline after each row
    }
}

void menu()
{
    printf("\n");
    printf("Menu:\n");
    printf("1. Flatten matrix\n");
    printf("2. Compress matrix\n");
    printf("3. Exit\n");
    printf("Enter your option: ");
}

void flattened(int dimension, int length, int matrix[dimension][dimension], int flattened_matrix[length])
{
    int counter=0;
    for(int i=0;i<dimension;i++) // iterate over each row
    {
        for(int j=0;j<dimension;j++) // iterate over each column
        {
                printf("%d ", matrix[i][j]); // print >=10 element followed by a space
                flattened_matrix[counter]=matrix[i][j];
                counter++;
        }
    }
}

//initialize all elements to 0
void initialized(int length, int array[length])
{
    for(int i=0;i<length;i++)
        array[i]=0;
}