#include<stdio.h>
#include<conio.h>
int main()
{
    float  fahrenheit, celsius;

    printf("\n Enter a temparature in Fahrenheit :");

    scanf("%f",&fahrenheit);


    celsius = (fahrenheit -32) * (5.0/9.0);

    printf("\n The given temparature is convert celsius %0.2f",celsius);

    getch();
    return 0;
}
