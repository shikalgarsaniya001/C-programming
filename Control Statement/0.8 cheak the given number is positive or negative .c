#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter a number :");
    scanf("\n %d",&Num);

    if(Num==0)
    {
        printf("\n The given number %d is neutral",Num);
    }

     else if(Num>0)
    {
        printf("\n The given number %d is positive",Num);
    }

    else
    {
        printf("\n The given number %d is negative",Num);
    }

    getch();
    return 0;
}

