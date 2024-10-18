#include<stdio.h>
int main(void)
{
    int student;
    int counter;
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
            while(counter!=student)
            {
                grade=0;
                printf("enter student grade:\n");
                scanf("%d",&grade);
                printf("grade %d\n",&grade);
                if(grade>=0 && grade<=100)
                {
                    printf("grade %d\n",&grade);
                    printf("sum %d\n",&sum);
                    sum=sum+grade;
                    printf("sum %d\n",&sum);
                    counter++;
                }
                else
                {
                    printf("grade must be >=0 and <=100.\n");
                }
            }
        }
        avg=sum/student;
        printf("the average is: %d \n", &avg);
    }
}