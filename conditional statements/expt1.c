#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3;
    printf("Enter first side of triangle:");
    scanf("%f",&s1);
    printf("Enter second side of triangle:");
    scanf("%f",&s2);
    printf("Enter third side of triangle");
    scanf("%f",&s3);

    if (s1+s2>s3 && s1+s3>s2 &&s2+s3>s1)
    {
        printf("The triangle is valid \n");
        if (s1==s2 && s2==s3)
        {
            printf("the triangle is an equilateral triangle\n");
        }
        else if (s1==s2 || s3==s1 || s2==s3 )
        {
            printf("the triangle is an isoceles triangle\n");
        }
        else{
            printf("the triangle is a scalene triangle\n");
        }
        //for right angle triangle
        float a =s1,b=s2,c=s3;
        if (a>b && a>c)
        {
            if (a*a==b*b+c*c)
            {
                printf("It is a right angled triangle");
            }
        }
        else if (b>c && b>a)
        {
            if(b*b==a*a+c*c)
            {
                printf("It is a right angled triangle");
            }
        }
        else if(c>b && c>a)
        {
            if (c*c==b*b+a*a)
            {
                printf("it is a right angled triangle");
            }
        }
        else{
            printf("it is not a right angled triangle");
        }    
    }
    else
    {
        printf("not a valid triangle");
    }
    return 0;

}