#include<stdio.h>
int main()
{
    int input1, input2;
    int chose;

    printf("This is a program as a caculator.\n");
    printf("Please enter two integers.\n");
    printf("Enter the first integer: ");
    scanf("%d", &input1);
    printf("Enter the second integer: ");
    scanf("%d", &input2);

    printf("Select one operation.\n");
    printf("1.\tAddition\n");
    printf("2.\tSubtration\n");
    printf("3.\tMultiplcation\n");
    printf("4.\tDivision\n");
    printf("5.\tEnd program\n");
    
    while((scanf("%d", &chose))!=EOF)
    {
        if(chose==5)
        {
            printf("Bye Bye.\n");
            printf("(Program terminated)\n");
            break;
        }
        switch(chose)
        {
            case 1:
                printf("Addition: %d\n",input1+input2);
                break;
            case 2:
                printf("Subtration: %d\n",input1-input2);
                break;
            case 3:
                printf("Multiplaction: %d\n",input1*input2);
                break;
            case 4:
                printf("Division: %d\n", input1/input2);
                break;
            default:
                printf("There is no this option.\n");
                break;
        }
    }
}