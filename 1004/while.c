/*
set total to zero
set grade counter to one
set grade to zero //initialize grade
set number of grades to zero //initalize number of grades

prompt user to input number of students
take user input for number of students
while (number of students < 1){
    print error message
    take user input for number of students
}

while (grade counter <= number of students){
    prompt user to input grade
    take user input for grade

    while (grade < 0 or grade > 100){
        print error message
        take user input for grade
    }

    add grade to total
    add one to grade counter
}

set average to (total / number of students)
print average
*/

#include <stdio.h>

int main(void){

    int iTotal = 0;
    int iGradeCounter = 1;
    int iGrade = 0;

    int iNumOfGrades = 0;

    puts("Enter number of Students: ");
    scanf("%d", &iNumOfGrades);
    while (iNumOfGrades < 1){
        puts("Invalid number of students. Please enter a number >= 1: ");
        scanf("%u", &iNumOfGrades);
    }//end while (iNumOfGrades < 1)

    while(iGradeCounter <= iNumOfGrades){
        
        printf("Enter grade %d:\n", iGradeCounter);
        scanf("%d", &iGrade);

        while (iGrade < 0 || iGrade > 100){
            puts("Invalid grade. Please enter a grade between 0 and 100: ");
            scanf("%d", &iGrade);
        }//end while (iGrade < 0 || iGrade > 100)

        iTotal = iTotal + iGrade;
        iGradeCounter = iGradeCounter + 1;

    }//end while

    float fAverage = (float)iTotal / iNumOfGrades;
    printf("Class average is %.2f\n", fAverage);


} //end main