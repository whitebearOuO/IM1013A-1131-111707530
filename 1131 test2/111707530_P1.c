#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    //only one program but two options in menu
    int chose;
    printf("This is a program has some function for you to chose.\n");
    printf("------\n");
    printf("choose your option:\n");
    printf("1.\tBuffet pricing.\n");
    printf("2.\tSum of non-prime numbers.\n");
    printf("3.\tEnd program\n");

    while(printf("Enter your chose[1/2/3]: "), scanf("%d", &chose))
    {
        if(chose==3) //end program
        {
            printf("Program end.\n");
            break;
        }
        else
        {
            switch(chose) //program menu chose
            {
                case 1: //Buffet pricing
                    printf("Option 1: Buffet pricing.\n");
                    int diningTime, adult, children;
                    double total; //total money
                    int people; //total people
                    double discount=1;
                    printf("Please enter the dining time period[1 to 6]: ");
                    scanf("%d", &diningTime);
                    printf("Please enter the number of adults: ");
                    scanf("%d", &adult);
                    printf("Please enter the number of children: ");
                    scanf("%d", &children);
                    people=adult+children;
                    if(people>=20)
                        discount=0.95; //5%off
                    switch(diningTime) //diningTime chose
                    {
                        case 1: //Weekday Lunch 985
                            total=(((985*adult)+(985*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekday Lunch $985/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                        case 2: //Weekday Afternoon Tea 795
                            total=(((795*adult)+(795*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekday Afternoon Tea $795/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                        case 3: //Weekday Dinner 1085
                            total=(((1085*adult)+(1085*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekday Dinner $1085/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                        case 4: //Weekend Lunch 1085
                            total=(((1085*adult)+(1085*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekend Lunch $1085/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                        case 5: //Weekend Afternoon Tea 975
                            total=(((975*adult)+(975*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekend Afternoon Tea $975/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                        case 6: //Weekend Dinner 1195
                            total=(((1195*adult)+(1195*children*0.7))*discount)*1.1; //1.1 is service charge
                            printf("Weekend Dinner $1195/person");
                            if(discount==0.95)
                                printf(" 5%% off\n");
                            else
                                printf("\n");
                            printf("Total amount to be paid $%.0f\n\n", total);
                            printf("<back to the top level menu>\n");
                            break;
                    }//end dining time switch
                    break;
                case 2://Sum of non-prime numbers
                    printf("Option 2: Sum of non-prime numbers.\n");
                    int number, counter=1;
                    int input;
                    int sum=0;
                    printf("Enter the number of intergers: ");
                    scanf("%d", &number);
                    while(counter<=number)
                    {
                        printf("Enter interger %d: ", counter);
                        scanf("%d", &input);
                        if(input>0) //is postive
                        {
                            int cnt=0;
                            //if number is less than/equal to 1,
                            //it is not prime
                            if(input<=1)
                                sum=sum+input;
                            else
                            {
                                //check how many numbers divide n in
                                //range 2 to sqrt(n)
                                for(int i=2;i*i<=input;i++)
                                {
                                    if(input%i==0)
                                        cnt++;
                                }
                                //if cnt is greater than 0 then n is
                                //not prime
                                if(cnt>0)
                                    sum=sum+input;
                            }
                            counter++;
                        }
                        else
                            printf("Please enter a postive interger.\n");
                    }//end while input
                    printf("The sum of non-prime intergers is: %d\n\n", sum);
                    printf("<Back to the top menu>\n");
                    break;
                default:
                    printf("There is no this option!\n");
            }//end program menu switch
        }//end else
    }//end while menu
}//end main