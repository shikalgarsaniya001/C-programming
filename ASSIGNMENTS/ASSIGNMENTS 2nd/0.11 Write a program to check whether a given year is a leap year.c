#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if(num%4==0)
    {
        printf("\n The given number %d is LEAP YEAR ",num);
    }
    else
    {
        printf("\n The given number %d is NOT A LEAP YEAR",num);
    }
    getch();
    return 0;
}
