#include<stdio.h>
int main()
{
    /*
        C1 C2 C3 C4 C5
    R1  *  *  *  *  *
    R2  *  *  *  *  *
    R3  *  *  *  *  *
    R4  *  *  *  *  *
    small 1 space, mid 2 space, big 4 space
    */
   
    int col, row;//col行row列
    int myCol,myRow;
    char confirm;
    while(1)
    {
        printf("Enter your seat row number: ");
        scanf("%d", &myRow);
        printf("Enter your seat column number: ");
        scanf("%d", &myCol);
        puts("");

        for(row=0;row<=4;row++)
        {
            for(col=0;col<=5;col++)
            {
                if(col==0 && row==0)//col 0 and row 0 just output C1 to C5
                {
                    printf("    C1 C2 C3 C4 C5");
                }
                else if(col==0 && row>=1)//col 0 need to output R1 to R4
                {
                    printf("R%d  ",row);
                }
                else if(row!=0)//row 1 start to print * (row0 for C1 to C5)
                {
                    if(myCol==col && myRow==row)
                        printf("X  ");
                    else
                        printf("*  ");
                }
            }
            puts("");
        }// end seat for loop
        printf("X = Your seat\n");
        if(myCol>5 || myRow>4)
            printf("Your seat is not here.\n");
        printf("Confirm seat [y/n]: ");
        scanf("%s", &confirm);
        if(confirm=='y')//leave while loop
        {
            printf("Thank you for booking your seat.\n");
            break;
        }
    }// end while loop
}// end main