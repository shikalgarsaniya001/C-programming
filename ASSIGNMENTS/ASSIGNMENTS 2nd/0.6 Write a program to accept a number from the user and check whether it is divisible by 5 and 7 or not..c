#include<stdio.h>
#include<conio.h>
int main()
{
    int Num;
    printf("\n Enter a number :");
    scanf("%d",&Num);

    if(Num%5==0 && Num%7==0)
    {
        printf("\n %d is divisible by 5 and 7",Num);
    }
    else if (Num%5==0)
    {
        printf("\n %d is divisible by 5",Num);
    }
    else if (Num%7==0)
    {
        printf("\n %d is divisible by 7",Num);
    }
    else
    {
        printf("\n %d is not divisible by 5 and 7",Num);
    }
    getch();
    return 0;
}

