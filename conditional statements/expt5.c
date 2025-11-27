#include<stdio.h>
int main()
{
    float l1,b1,l2,b2,l3,b3,p1,p2,p3,maxp;
    printf("Enter length and breadth of the first rectangle");
    scanf("%f %f",&l1,&b1);
    printf("Enter length and breadth of second rectangle");
    scanf("%f %f",&l2,&b2);
    printf("Enter length and breadth of third rectangle");
    scanf("%f %f",&l3,&b3);
    p1=2.0*(l1+b1);
    p2=2.0*(l2+b2);
    p3=2.0*(l3+b3);
    maxp=(p1>p2 && p1>p3)? p1:(p2>p3 && p2>p1)? p2:p3;
    printf("The perimeter of first rectangle is: %.2f\n",p1);
    printf("The perimeter of second rectangle is: %.2f\n",p2);
    printf("The perimeter of third rectangle is: %.2f\n",p3);
    printf("The rectangle with maximum perimeter is: %.2f",maxp);
    return 0;
    
}