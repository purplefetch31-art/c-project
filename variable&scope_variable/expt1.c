#include<stdio.h>
int a,b;
void add()
{
    printf("The addition of two numbers is:%d",a+b);
}
int main()
{
    a=10;
    b=10;
    add();
    return 0;
}