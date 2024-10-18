#include<stdio.h>
int main(void)
{
    printf("this is a program to calculate students grade average.\n");
    int student;
    int counter=1;
    int grade;
    float sum;
    float avg;
    while(printf("How many students:\n"))
    {
        scanf("%d",&student);
        if(student<0) // check student number
        {
            printf("number of students must >=0\n");
            continue;
        }
        else if(student==0) // no student, end
        {
            printf("no grades are provided.\n");
            break;
        }
        else
        {
            while(counter<=student) // start to run
            {
                printf("enter student %d grade:\n",counter);
                scanf("%d",&grade);
                if(grade>=0 && grade<=100) // grade valid
                {
                    sum=sum+grade;
                    counter++;
                }
                else // grade invalid, enter grade again
                {
                    printf("grade must be >=0 and <=100.\n");
                }
            }
            avg=sum/student;
            printf("the average is: %3.2f \n\n", avg);
            break;
        }
    }// end while
} // end main