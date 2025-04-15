#include<stdio.h>
#include<conio.h>
int main()
{
    int No1,No2;
    printf("\n ***************************");

    printf("\n Enter a 1st number :");
    scanf("%d",&No1);

    printf("\n Enter a 2nd number:");
    scanf("%d",&No2);

    if(No1>No2)
    {
        printf("\n NO1 is maximum Number  ");
    }

    else
    {
        printf("\n NO2 is maximum Number");
    }

    printf("\n ***************************");

    getch();

    return 0;
}
