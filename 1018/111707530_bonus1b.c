#include<stdio.h>
int main(void)
{
    int counter=0;
    int grade;
    float sum=0;
    float avg=0;
    int pass=0;
    while(grade!=-1) // if not -1 just run program
    {
        printf("enter grade, -1 to end: \n");
        scanf("%d", &grade);
        if(grade==-1)
        {
            if(counter==0) // grade==-1 and counter==0 -> no enter
            {
                printf("No grades were entered.\n\n");
            }
            else // counter>1 -> have grade, start to output result
            {
                avg=sum/counter;
                printf("class total: %3.0f\n", sum);
                printf("class size: %d\n", counter);
                printf("the average is: %3.2f \n", avg);
                printf("Number of passes is: %d\n", pass);
                printf("Number of fails is: %d\n", counter-pass);
                printf("Pass rate is: %3.2f%\n", (float)pass/(float)counter*100); //int to float avoid wrong thing
                if((float)pass/(float)counter*100>=60) // if pass rate>60
                    printf("Bonus to instructor!\n");
            }
        }
        else // grade not -1, calculate total grade and count pass student
        {
            if(grade>=60)
                pass++;
            sum=sum+grade;
            counter++;
        }
    } // end while
} // end main