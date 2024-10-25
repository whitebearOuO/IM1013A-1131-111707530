#include<stdio.h>
int main()
{
    //bmi calculator
    float hight, weight;
    float bmi;
    printf("This is a program to calculate your bmi.\n");
    printf("Please enter your hight in cm (only eat interger): ");
    scanf("%f", &hight);
    printf("Please enter your weight in kg (only eat interger): ");
    scanf("%f", &weight);
    bmi=weight/((hight/100)*(hight/100));
    printf("Your bmi is %.2f\n", bmi);
}