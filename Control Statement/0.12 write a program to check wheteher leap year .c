#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if(num%2==0)
    {
        printf("\n %d is leap year",num);
    }
    else
    {
        printf("\n %d is not leap year",num);
    }
    getch();
    return 0;
}
