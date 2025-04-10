#include<stdio.h>
#include<conio.h>

int main()

{
    int Num;

    printf("\n Enter a number :");
    scanf("%d",&Num);

    if(Num>=0)
    {
        printf("\n Number %d is positive",Num);

        if(Num%2==0)
        {
            printf("\n Number %d is Even",Num);
        }
        else
        {
            printf("\n Number %d is Odd",Num);
        }
    }
    else
    {
        printf("\n Number  %d is Negative",Num);

        if(Num%2==0)
        {
            printf("\n Number %d is Even",Num);
        }
        else
        {
            printf("\n Number %d is Odd",Num);
        }
    }
    getch();
    return 0;
}
