#include<stdio.h>
int main(void)
{
    //tool for celsius to fahrenfeit or reverse
    float fCelsius;
    float fFahrenheit;
    int chose=0;
    printf("this is a tool for cover Celsius and Fahrenheit\n");
    printf("Fahrenheit to Celsius type[1] / Celsius to Fahrenheit type[2]\n");
    while(printf("enter your chose[1/2]: \n"), scanf("%d", &chose))
    {
        if(chose==1)//f to c
        {
            printf("enter Fahrenheit: \n");
            scanf("%f", &fFahrenheit);
            fCelsius= (fFahrenheit-32)*5/9;
            printf("Celsius is:  %3.2f\n", fCelsius);
        }
        else if(chose==2)//c to f
        {
            printf("enter Celsius: \n");
            scanf("%f", &fCelsius);
            fFahrenheit= fCelsius*9/5+32;
            printf("Fahrenheit is:  %3.2f\n", fFahrenheit); //%3.2f 3:代列印的數佔3位元寬，2:小數後兩位
        }
        else
            printf("wrong input, try again\n");
    }//end while input
}//end main