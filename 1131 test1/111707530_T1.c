#include<stdio.h>
int main(void)
{
    //3 students, check score(0~100), if invalid just stop.

    printf("This is a program for you to classify students' grade range.\n");

    printf("please enter the scores of 3 students.\n");
    int gradeA=0, gradeB=0, gradeC=0, gradeD=0, gradeF=0;//grade counter
    int studentGrade=0;
    int invalid=0;
    for(int i=0; i<3; i++)
    {
        scanf("%d", &studentGrade);
        if(studentGrade>=0 && studentGrade<= 100)
        {
            if(studentGrade<60)
                gradeF++;
            else if(studentGrade>=60 && studentGrade<=69)
                gradeD++;
            else if(studentGrade>=70 && studentGrade<=79)
                gradeC++;
            else if(studentGrade>=80 && studentGrade<=89)
                gradeB++;
            else if(studentGrade>=90 && studentGrade<=100)
                gradeA++;
        }//valid grade
        else
        {
            printf("sorry, all scores must be between 0 and 100.\n");
            printf("\nprogram ends \n");
            invalid++;
            break;
        }//inalid grade
    }//for, input grade and count
    if(invalid==0)
        {
            printf("grade distribution:\n");
            printf("A(90 and above):%d student(s)\n", gradeA);
            printf("B(80-89):%d student(s)\n", gradeB);
            printf("C(70-79):%d student(s)\n", gradeC);
            printf("D(60-69):%d student(s)\n", gradeD);
            printf("F(below 60):%d student(s)\n", gradeF);
            printf("\nprogram ends \n");
        }//ouput result
}//end main