#include<stdio.h>
#include<conio.h>
int main()
{
    int Num;
    printf("\n Enter a number :");
    scanf("\n %d",&Num);

    (Num>0)? printf("\n The %d number is positive ",Num) : printf("\n The %d number is negative",Num);

    getch();

    return 0;
}
