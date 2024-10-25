#include<stdio.h>
in main(void)
{
    puts("===while===");
    unsigned int iCounter=1;
    while(iCounter<=5)
    {
        if(iCounter=4)
        {
            iCounter++;
            continue;
        }
        printf("%u\n", iCounter);
        iCounter++;
    }//end while

    puts("")
}