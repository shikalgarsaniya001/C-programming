#include<stdio.h>
#include<conio.h>
int main()
{
    float radius, Area;
  float const pi=3.14;

    printf("\n Enter a radius :");
    scanf("\n %f",&radius);

    Area = pi* radius * radius;

    printf("\n Area of the circle is %f",Area);

    return 0;
}
