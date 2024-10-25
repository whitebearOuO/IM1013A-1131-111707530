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
        switch(chose)
        {
            case 1://f to c
                printf("enter Fahrenheit: \n");
                scanf("%f", &fFahrenheit);
                fCelsius= (fFahrenheit-32)*5/9;
                printf("Celsius is:  %3.2f\n", fCelsius);
                break;

            case 2://c to f
                printf("enter Celsius: \n");
                scanf("%f", &fCelsius);
                fFahrenheit= fCelsius*9/5+32;
                printf("Fahrenheit is:  %3.2f\n", fFahrenheit);
                break;

            default:
                printf("worng inputm try again\n");
                break;
        }//end switch
    }//end while input
}//end main