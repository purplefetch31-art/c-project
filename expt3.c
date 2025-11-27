#include <stdio.h>

int main()
{
    int age;
    char name[30];

    printf("Enter your name");
    scanf("%s",name);

    printf("Enter your age");
    scanf("%d", &age);

    printf(name);
    printf("\n%d",age);
    return 0;

}