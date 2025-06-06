#include<stdio.h>
#include<conio.h>
int main()
{
    float kilometer , meter;

    printf("\n_______________________________________\n");

    printf("\n Enter a distance :");
    scanf("%f",&kilometer);

    meter = kilometer *1000;

    printf("\n convertion of kilometer is %0.2f",meter);

    printf("\n_______________________________________\n");


    getch();
    return 0;

}

