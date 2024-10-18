#include<stdio.h>
int main(void)
{
    int student;
    int counter=1;
    int grade;
    int sum;
    int avg;
    printf("How many students:\n");
    while(scanf("%d",&student))
    {
        if(student<0)
        {
            printf("number of students must >=0\n");
            continue;
        }
        else if(student==0)
        {
            printf("no grades are provided.\n");
            break;
        }
        else
        {
            while(counter<=student)
            {
                printf("enter student %d grade:\n",counter);
                scanf("%d",&grade);
                if(grade>=0 && grade<=100)
                {
                    sum=sum+grade;
                    counter++;
                }
                else
                {
                    printf("grade must be >=0 and <=100.\n");
                }
            }
            avg=sum/student;
            printf("the average is: %d \n", avg);
        }
    }
}