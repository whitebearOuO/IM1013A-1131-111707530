#include<stdio.h>
int main(void)
{
    //攝氏轉華氏
    float fCelsius;
    float fFahrenheit;
    char chose;
    printf("這個是溫度轉換工具，可以進行華氏與攝氏之間的轉換。\n");
    printf("華氏轉攝氏輸入[1] / 攝氏轉華氏輸入[2]\n");
    while(printf("請輸入你的選擇[1/2]: \n"), scanf("%c", &chose))
    {
        if(chose==1)//f to c
        {
            printf("請輸入華氏: \n");
            scanf("%f", &fFahrenheit);
            fCelsius= (fFahrenheit-32)*5/9;
            printf("Celsius is:  %3.2f\n", fCelsius);
        }
        else if(chose==2)//c to f
        {
            printf("請輸入攝氏: \n");
            scanf("%f", &fCelsius);
            fFahrenheit= fCelsius*9/5+32;
            printf("Fahrenheit is:  %3.2f\n", fFahrenheit); //%3.2f 3:代列印的數佔3位元寬，2:小數後兩位
        }
        else
            printf("輸入錯誤，請重新輸入\n");
    }//end while input
}//end main