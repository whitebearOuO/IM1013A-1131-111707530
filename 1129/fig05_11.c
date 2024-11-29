#include<stdio.h>
#include<stdlib.h>

//shifed, scaled random intergers produced by 1 + rand() % 6.

int main()
{
    //loop 20 times
    for(int i=1;i<=20;++i)
    {
        //pick random number form 1 to 6 and output it
        printf("%10d", 1+(rand()%6));
        //if counter is divisible by 5, begin new line of output
        if(i%5==0)
            puts("");
    }
}//end main