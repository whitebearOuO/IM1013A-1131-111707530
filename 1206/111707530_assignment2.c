#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void initialized(int square, int array2D[square][square]);
void rand_array(int square, int array2D[square][square]);
void print_array(int square, int array2D[square][square]);
void rotate_90_degree(int square, int array2D[square][square], int rotatedArray[square][square]);

int main()
{
    int square;
    printf("Please enter the size of the square. (size between 2 and 10)\n");
    scanf("%d",&square);
    while(1)
    {
        if(square<2 || square>10)
        {
            while(1)
            {
                printf("Invalid size. Please enter again. (size between 2 and 10)\n");
                scanf("%d", &square);
                if(square<2 || square>10)
                    continue; //invalid, continue to enter size
                else
                    break; //vaild, start program
            }
        }        
        else
        {
            int array2D[square][square];
            int rotatedArray[square][square];
            initialized(square, array2D);
            printf("Initialized square:\n");
            print_array(square, array2D);
            rand_array(square, array2D);
            printf("Randomized square:\n");
            print_array(square, array2D);
            rotate_90_degree(square, array2D, rotatedArray);
            printf("Square rotated 90 degree:\n");
            print_array(square, rotatedArray);
            printf("Program ends.\n");
            break;
        }
    }//end while
    return 0;
}//end main

//initialize all elements to 0
void initialized(int square, int array2D[square][square])
{
    for(int i=0;i<square;i++)
    {
        for(int j=0;j<square;j++)
            array2D[i][j] = 0;
    }
}

//rand all element
void rand_array(int square, int array2D[square][square])
{
    srand(time(NULL)); //random seed
    for(int i=0;i<square;i++)
    {
        for(int j=0;j<square;j++)
            array2D[i][j]=rand()%99+1; //rand 1 to 99
    }
}

//print array
void print_array(int square, int array2D[square][square])
{
    for(int i=0;i<square;i++)
    {
        for(int j=0;j<square;j++)
            printf("%d ", array2D[i][j]);
        printf("\n");
    }
}

//rotate array right 90 degree
void rotate_90_degree(int square, int array2D[square][square], int rotatedArray[square][square])
{
    for (int i=0;i<square;i++)
    {
        for (int j=0;j<square;j++)
            rotatedArray[j][square-1-i]=array2D[i][j];
    }
}