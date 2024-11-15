#include<stdio.h>

//function prototype
float bmi(float, float);

int main(void)
{
    //taker user input for height and weight
    //call bmi function to calculate bmi
    //print bmi result

    float height, weight;
    float result=0;
    puts("please enter height.");
    scanf("%f", &height);
    puts("please enter weight.");
    scanf("%f", &weight);
    result=bmi(height, weight);
    printf("your bmi is %.2f\n", result);

}//end main

//function definition
float bmi(float height, float weight)
{
    float result;
    result=weight/((height/100)*(height/100));
    return result;
}//end bmi
