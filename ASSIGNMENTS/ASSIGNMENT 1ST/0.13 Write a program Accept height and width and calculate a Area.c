#include<stdio.h>
#include<conio.h>
int main()
{
    float width,height,Area;

    printf("\n _________________________________\n");

    printf("\n Enter a width :");
    scanf("\n %f",&width);

    printf("\n Enter a height :");
    scanf("\n %f",&height);

    printf("\n _________________________________\n");


    Area = width * height;

    printf("\n Area of the rectangle is %0.2f",Area);

    printf("\n _________________________________\n");

    getch();
    return 0;





}
