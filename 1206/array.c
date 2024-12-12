#include<stdio.h>
#define SIZE 5
int main(void)
{
    /*
    ask user to enter five intergers
    store the five intergers in an array of 5 elements

    print each element in the array
    print the sum of the elements in the array

    enter interger1: 9
    enter interger2: -1
    ......
    */
   int a[SIZE];
   int sum=0;

   for(int i=0;i<SIZE;i++)
   {
        printf("enter interger%d: ", i+1);
        scanf("%d", &a[i]);
   }
   for(int i=0;i<SIZE;i++)
   {
        printf("%d ", a[i]);
   }
   printf("\n");
   for(int i=0;i<SIZE;i++)
   {
        sum=sum+a[i];
   }
   printf("the sum of the elements in array is: %d\n", sum);
}