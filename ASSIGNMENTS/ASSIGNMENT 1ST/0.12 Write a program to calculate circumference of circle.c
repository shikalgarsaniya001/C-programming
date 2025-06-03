#include<stdio.h>
#include<conio.h>
int main()
{
    float radius, Circum;
  float const pi=3.14;

    printf("\n Enter a radius :");
    scanf("\n %f",&radius);

    Circum = 2 *pi*radius;

    printf("\n Circumference  of the circle is %0.2f",Circum);

    return 0;
}
