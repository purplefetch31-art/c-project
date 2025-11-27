#include<stdio.h>
int main()
{
    int num;
    int pcount=0;
    int ncount=0;
    int zcount=0;
    char choice;

    do
    {
        printf("Enter a number");
        scanf("%d",&num);
        if (num>0)
        {
            pcount++;
        }
        else if (num<0)
        {
            ncount++;
        }
        else if (num==0)
        {
            zcount++;
        }
        else
        {
            printf("wrong input");
        }
        printf("Enter y if you wish to add more numbers:");
        while (getchar() != '\n');
        scanf("%c",&choice);

    } while (choice =='Y' || choice =='y');
    printf("The total positive numbers entered:%d\n",pcount);
    printf("The total negative numbers entered:%d\n",ncount);
    printf("The total number of zeroes entered:%d",zcount);

    return 0;

}