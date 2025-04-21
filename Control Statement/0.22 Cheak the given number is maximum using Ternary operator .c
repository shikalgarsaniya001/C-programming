#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1=0, Num2=0;

    printf("\n *************************");

    printf("\n Enter a 1st number :");
    scanf("%d",&Num1);
    printf("\n Enter a 2nd number :");
    scanf("%d",&Num2);

    printf("\n *************************");

  (Num1==Num2) ? printf("\n the given both number are Equal "): (Num1>Num2)? printf("\n The %d  number is maximum",Num1) : printf("\n The %d  number is maximum",Num2);

    printf("\n *************************");
    getch();

    return 0;
}
