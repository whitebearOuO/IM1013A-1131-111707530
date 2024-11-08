#include<stdio.h>
int main()
{
    int col, row;
    for(col=0;col<=5;col++)
    {
        for(row=0;row<=col;row++)
        {
            printf("* ");
        }
        puts("");
    }
}