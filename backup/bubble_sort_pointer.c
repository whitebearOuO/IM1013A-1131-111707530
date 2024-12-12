#include<stdio.h>

//function
void swap(int*, int*); //swap two integers

int main()
{
    int size;
    scanf("%d", &size);
    int bubble[size];
	for(int i=0;i<size;i++)
		scanf("%d", &bubble[i]);
	for(int j=0;j<size;j++)
	{
		for(int k=0;k<size-j-1;k++)
		{
		    if(bubble[k]>bubble[k+1])
				swap(&bubble[k],&bubble[k+1]);
		}
	}
    for(int r=0;r<size;r++)
        printf("%d ", bubble[r]);
    printf("\n");
}

//function
void swap(int *a, int *b) //swap two integers
{
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}