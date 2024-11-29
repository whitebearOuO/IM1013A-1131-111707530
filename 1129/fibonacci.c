#include<stdio.h>
int fibo(int);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
}

int fibo(int _n)
{
    if(_n==1||_n==2)
        return 1;
    else
        return(fibo(_n-1)+fibo(_n-2));
}