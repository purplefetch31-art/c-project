#include<stdio.h>
int main()
{
    int row=4;
    int num=1;
    int value;
    for (int i = 0; i <row; i++)
    {
        for (int j = row-i; j>=0; j--)
        {
            printf(" ");
            value=1;
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%2d",value);
            value = value * (i-k)/(k+1);
        }
        printf("\n");
    }
    return 0;
}