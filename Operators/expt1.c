#include<stdio.h>

int main()
{
    int area,perim,length,width;
    printf("enter length of the rectangle");
    scanf("%d",&length);
    printf("enter width of the rectangle");
    scanf("%d",&width);
    area=length*width;
    perim=2*(length+width);
    printf("area of rectangle is:%d\n",area);
    printf("perimeter of rectangle is:%d",perim);
    return 0;

}