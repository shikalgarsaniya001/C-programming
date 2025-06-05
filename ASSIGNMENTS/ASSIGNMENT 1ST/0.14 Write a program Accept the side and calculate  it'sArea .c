#include<stdio.h>
#include<conio.h>
int main()
{
    float side, Area;

    printf("\n_______________________________________\n");

    printf("\n Enter a side :");
    scanf("%f",&side);

    Area = side * side;

    printf("\n Area of the Sqr is %0.6f",Area);

    printf("\n_______________________________________\n");


    getch();
    return 0;

}
