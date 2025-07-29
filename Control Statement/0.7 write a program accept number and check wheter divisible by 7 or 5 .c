#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if (num%7==0 && num%5==0)
    {
        printf("\n %d is divisible by 7 or 5",num);
    }

    else if(num%7==0)
    {
        printf("\n %d is divisible by 7",num);
    }
    else if(num%5==0)

    {
        printf("\n %d is not divisible by 5",num);
    }
    else
    {
        printf("\n %d is not divisible by 5 or 7",num);
    }

    getch();
    return 0;
}

