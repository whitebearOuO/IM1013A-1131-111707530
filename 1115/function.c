#include<stdio.h>
#include<stdbool.h>

float multiplication(float, float);
float division(float, float);
float bmi(float, float);
float recursive_factorial(float);

/*
1.multiplication
2.division
3.bmi
4.recursive factorial(遞迴)
5.exit
*/

int main()
{
    int choose;
    float num1=0, num2=0;
    float result=0;
    while(1)
    {
        printf("what do you want to do?\n");
        printf("1.multiplication\n2.division\n3.bmi\n4.recursive factorial\n5.exit\n");
        scanf("%d", &choose);
        if(choose==5)
            break;
        switch(choose)
        {
            case 1:
                printf("option 1: multiplication.\n");
                printf("please enter 2 number.\n");
                printf("enter number1: ");
                scanf("%f", &num1);
                printf("enter number2: ");
                scanf("%f", &num2);
                result=multiplication(num1, num2);
                printf("%.2f\n", result);
            case 2:
                printf("option 2: division.\n");
                printf("please enter 2 number.\n");
                printf("enter number1: ");
                scanf("%f", &num1);
                printf("enter number2: ");
                scanf("%f", &num2);
                result=division(num1, num2);
                printf("%.2f\n", result);
            case 3:
                printf("option 3: bmi.\n");
                printf("please enter your height in cm: ");
                scanf("%f", &num1);
                printf("please enter your weight in kg: ");
                scanf("%f", &num2);
                result=bmi(num1, num2);
                printf("%.2f\n", result);
            case 4:
                printf("option 4: recursive factorial.\n");
                printf("please enter a number: ");
                scanf("%f", &num1);
                result=recursive_factorial(num1);
                printf("%.2f\n", result);
        }
    }// end while
}// end main

//function definition
float multiplication(float arg_num1, float arg_num2)
{
    return arg_num1*arg_num2;
}

float division(float arg_num1, float arg_num2)
{
    return arg_num1/arg_num2;
}

float bmi(float arg_heightCM, float arg_weightKG)
{
    float heightM;
    float result;
    heightM=division(arg_heightCM, 100);
    result=division(arg_weightKG, multiplication(heightM, heightM));
    return result;
}

float recursive_factorial(float arg_num1)
{
    if (arg_num1==1) 
        return arg_num1;
    else
        return arg_num1*recursive_factorial(arg_num1-1);
}