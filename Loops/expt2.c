#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number");
    scanf("%d",&num);
    for ( i = 0; i < 11; i++)
    {
        printf("%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}