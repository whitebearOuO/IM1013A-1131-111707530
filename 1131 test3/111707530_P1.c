#include<stdio.h>
#include<math.h>

float mean(float, float, float);
float standard(float, float, float);
float standardize(float);
int rectangle(int, int);
int diamond(int);

int main()
{
    /*
    option 1. rectangle pattern
        row列 columns行
    option 2. diamond pattern with stars
        odd number >=3
    option 3. calculate the mean and standard deviation of the three number
        use function
    */

    printf("Please choose which option you want to do:\n");
    printf("1: Square pattern\n");
    printf("2: Diamond pattern with stars\n");
    printf("3. Standarize three numbers\n");
    printf("4. End program\n");
    int choose;

    while(printf("Enter your choose[1/2/3/4]: "), scanf("%d", &choose))
    {
        if(choose==4)
        {
            printf("End program.\n");
            break;
        }//leave while
        else
        {
            switch(choose)
            {
                case 1:
                    printf("option 1. Square pattern\n");
                    int row, col;
                    int tmp=0, counter=1;
                    printf("Please enter the number of rows:\n");
                    scanf("%d", &row);
                    printf("Please enter the number of columns:\n");
                    scanf("%d", &col);
                    rectangle(row, col);
                    printf("\n<back to the top level menu>\n");
                    break;

                case 2:
                    printf("option 2. Diamond pattern with stars\n");
                    printf("Please enter the number of layers of diamond:");
                    int layer;
                    scanf("%d", &layer);
                    if(layer>=3 && layer%2!=0) //must >3 and is odd
                        diamond(layer);
                    else
                        printf("input invaild!\n");
                    printf("\n<back to the top level menu>\n");
                    break;

                case 3:
                    printf("option 3. Standarize three numbers\n");
                    int x1, x2, x3;
                    float z1, z2, z3;
                    printf("Please enter three intergers:\n");
                    scanf("%d", &x1);
                    scanf("%d", &x2);
                    scanf("%d", &x3);
                    
                    z1=(x1-mean(x1, x2, x3))/standard(x1, x2, x3);
                    z2=(x2-mean(x1, x2, x3))/standard(x1, x2, x3);
                    z3=(x3-mean(x1, x2, x3))/standard(x1, x2, x3);
                    printf("standardized numbers:\n");
                    printf("z1 = %.3f\n", z1);
                    printf("z2 = %.3f\n", z2);
                    printf("z3 = %.3f\n", z3);
                    printf("\n<back to the top level menu>\n");
                    break;

                default:
                    printf("Wrong input.\n");
            }
        }
   }//end big while
}//end main

//function
float mean(float x1, float x2, float x3)
{
    return (x1+x2+x3)/3;
}

float standard(float x1, float x2, float x3)
{
    float up;
    up=(pow(x1-mean(x1,x2,x3),2))+(pow(x2-mean(x1,x2,x3),2))+(pow(x3-mean(x1,x2,x3),2));
    return sqrt(up/3);
}

int rectangle(int row, int col)
{
    int reverse=0, counter=1;
    for(int i=0;i<row;i++)
    {
        for(int o=0;o<col;o++)
        {
            if(counter==9)
                reverse=1;
            else if(counter==1)
                reverse=0;
            if(reverse==0)
            {
                printf("%d ", counter);
                counter++;
            }
            else if(reverse==1)
            {
                printf("%d ", counter);
                counter--;
            }
        }
            printf("\n");
    }
}

int diamond(int n) 
{ 
	int space=n-1;
	int reverse=0, counter=1;
	for (int i=1;i<n;i++) 
	{ 
		//print space before *
		for (int j=0;j<space;j++) 
			printf(" "); 
		for (int j=0;j<=i-1;j++) 
		{
			if(counter==9)
                reverse=1;
            else if(counter==1)
                reverse=0;
            if(reverse==0)
            {
                printf("%d ", counter);
                counter++;
            }
            else if(reverse==1)
            {
                printf("%d ", counter);
                counter--;
            }
		}
		printf("\n"); 
		space--; 
	} 
	//down
	space=0; 
	for(int i=n;i>0;i--) 
	{ 
		//print space after *
		for (int j=0;j<space;j++) 
			printf(" "); 

		// Print the i stars 
		for (int j=0;j<i;j++) 
		{
			if(counter==9)
                reverse=1;
            else if(counter==1)
                reverse=0;
            if(reverse==0)
            {
                printf("%d ", counter);
                counter++;
            }
            else if(reverse==1)
            {
                printf("%d ", counter);
                counter--;
            }
		}
		printf("\n"); 
		space++; 
	}
}