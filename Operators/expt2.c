#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter Celsius:");
    scanf("%f",&C);
    F=(C*(9.0/5.0))+32.0;
    printf("The Temperature is Farenheit is:%.2f",F);
    return 0;
}