#include<stdio.h>

int factorial(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
}

int factorial(int _n)
{
    if(_n==1)
        return 1;
    else
        return(_n*factorial(_n-1));
}