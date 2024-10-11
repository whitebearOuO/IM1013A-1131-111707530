#include <stdio.h>

/*
things to improve:
1. prompt user to enter the number of grades
    1.1 should we check the input?
    1.2 if yes, what to do if input is not valid or is zero?
    #note: number of grades should be >= 0

2. check grades input
    2.1 grades must be between 0 and 100, inclusive.
    2.2 what to do if the grade is not valid or out of range (0-100)

*/

int main(void){

    int iCurrentGrade = 0;
    int iTotal = 0;
    int iGradeCounter = 1;
    float fAverage = 0;
    int iNumOfGrades;

    puts("how many grades?");
    scanf("%d", &iNumOfGrades);

    while (iGradeCounter <= iNumOfGrades){
        iCurrentGrade = 0;
        printf("enter a grade for student %d :", iGradeCounter);
        scanf("%d",  &iCurrentGrade);
        iTotal += iCurrentGrade; //shorthand for iTotal = iTotal + iCurrentGrade
        iGradeCounter++; //shorthand for iGradeCounter = iGradeCounter + 1
    }//end while iGradeCounter

    fAverage = (float)iTotal/iNumOfGrades; //type casting

    printf("class average: %f\n", fAverage);

}//end main