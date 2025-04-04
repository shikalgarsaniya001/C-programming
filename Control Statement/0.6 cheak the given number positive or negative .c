#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter a number :");
    scanf("\n %d",&Num);

    if(Num>0)
    {
        printf("\n The given number is positive");
    }

    else
    {
        printf("\n The given number is negative");
    }

    getch();
    return 0;
}
