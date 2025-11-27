#include<stdio.h>
int main()
{
    float BMI,weight,height;
    printf("Enter Height in metres");
    scanf("%f",&height);
    printf("Enter weight in kgs");
    scanf("%f",&weight);
    BMI=weight/(height*height);
    printf("Your BMI is:%.1f",BMI);
    if (BMI<15.0)
    {
        printf("Starvation");
    }
    else if (BMI>=15.1 && BMI<=17.5)
    {
        printf("Anorexic");
    }
    else if (BMI>=17.6 && BMI<=18.5)
    {
        printf("Underweight");
    }
    else if (BMI>=18.6 && BMI<=24.9)
    {
        printf("Ideal");
    }
    else if (BMI>=25.0 && BMI<=29.9)
    {
        printf("Overweight");
    }
    else if (BMI>=30.0 && BMI<=39.9)
    {
        printf("Obese");
    }
    else if (BMI>40.0)
    {
        printf("Morbidity Obese");
    }
    else{
        printf("Check the values you have entered");
    }
    return 0;

}