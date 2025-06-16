#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    if(num>0)
    {
        printf("\n The given number %d is possitive ",num);
    }
    else
    {
        printf("\n The given number %d is negative ",num);
    }
    getch();
    return 0;
}
