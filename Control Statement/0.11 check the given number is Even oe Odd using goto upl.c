#include<stdio.h>
#include<conio.h>
int main()
{
    int Num;

    printf("\n *****************************");
     up:

    printf("\n Enter a number :");
    scanf("%d",&Num);

    if(Num==0)

    {
        printf("\n Number %d is neutral",Num);
    }

    else if(Num%2==0)

    {
        printf("\n Number %d is Even",Num);
        goto up;
    }

    else

    {
        printf("\n Number %d is odd",Num);
    }

    printf("\n *****************************");

    getch();

    return 0;


}

