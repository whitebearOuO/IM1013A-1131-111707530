#include<stdio.h>
int main()
{
    int size;
    int tmp;
    scanf("%d", &size);
    int bubble[size];
	for(int i=0;i<size;i++)
		scanf("%d", &bubble[i]);
	for(int j=0;j<size;j++)
	{
		for(int k=0;k<size-j-1;k++)
		{
		    if(bubble[k]>bubble[k+1])
            {
                tmp=bubble[k];
                bubble[k]=bubble[k+1];
                bubble[k+1]=tmp;
            }
		}
	}
    for(int r=0;r<size;r++)
        printf("%d ", bubble[r]);
    printf("\n");
}
