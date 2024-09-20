#include<stdio.h>
int main(void)
{
    //攝氏轉華氏
    float fCelsius=0, fFahrenheit=0;
    printf("this is for Celsius cover to Fahrenheit.\n");
    printf("please enter Celsius: \n");
    scanf("%f",&fCelsius);
    fFahrenheit= fCelsius*9/5+32;
    printf("Fahrenheit is:  %3.2f\n",fFahrenheit); //%3.2f 3:代列印的數佔3位元寬，2:小數後兩位
}//end main