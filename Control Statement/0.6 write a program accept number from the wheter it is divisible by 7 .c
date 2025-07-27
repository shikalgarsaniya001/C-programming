#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if(num%7==0)
    {
        printf("\n %d is divisible by 7",num);
    }
    else

    {
        printf("\n %d is not divisible by 7",num);
    }

    getch();
    return 0;
}
