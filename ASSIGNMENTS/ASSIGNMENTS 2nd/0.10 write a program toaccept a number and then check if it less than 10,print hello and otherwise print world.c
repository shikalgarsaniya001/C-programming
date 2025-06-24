#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if(num<10)
    {
        printf("\n HELLO");
    }
    else
    {
        printf("\n WORLD");
    }
    getch();
    return 0;
}
