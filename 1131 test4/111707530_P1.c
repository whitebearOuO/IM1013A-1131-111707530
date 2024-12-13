#include<stdio.h>

void pyramid(int);

int main()
{
    int height;
    printf("Please enter the height of the pyramid:\n");
    scanf("%d", &height);
    printf("\nPyramid pattern:\n");
    pyramid(height);
}

//function
void pyramid(int n)
{
    if (n==0)
        return;
    pyramid(n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d", n);
    }
    printf("\n");
}