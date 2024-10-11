#include<stdio.h>
int main(void)
{
    int lengthsFirst=0, lengthsSecond=0, lengthsThird=0;
    int tmp=0;//for sort

    printf("This is a program for you to determine whether 3 lengths can form a triangle and whether is a right tirangle.\n");

    printf("Please enter the first lengths of three sides: \n");
    scanf("%d",&lengthsFirst);
    printf("Please enter the second lengths of three sides: \n");
    scanf("%d",&lengthsSecond);
    printf("Please enter the third lengths of three sides: \n");
    scanf("%d",&lengthsThird);

    while(1)//sort
    {
        if(lengthsFirst<=lengthsSecond && lengthsSecond<=lengthsThird)
        {
            //printf("end sort\n"); for debug
            break;
        }
        else
        {
            if(lengthsFirst>lengthsSecond)
            {
                tmp=lengthsFirst;
                lengthsFirst=lengthsSecond;
                lengthsSecond=tmp;
                //printf("sort 1\n"); for debug
            }
            if(lengthsSecond>lengthsThird)
            {
                tmp=lengthsSecond;
                lengthsSecond=lengthsThird;
                lengthsThird=tmp;
                //printf("sort 2\n"); for debug
            }
        }//end sort else
    }//end while
    
    if(lengthsFirst+lengthsSecond>lengthsThird)//check whether is a triangle
    {
        if(lengthsFirst*lengthsFirst+lengthsSecond*lengthsSecond == lengthsThird*lengthsThird)
        {
            printf("A Right Triangle.\n\n");
            printf("Program ends.\n");
        }
        else
        {
            printf("Not a Right Triangle.\n\n");
            printf("Program ends.\n");
        }
    }
    else
    {
        printf("Cannot form a triangle.\n\n");
        printf("Program ends.\n");
    }
    
}//end main