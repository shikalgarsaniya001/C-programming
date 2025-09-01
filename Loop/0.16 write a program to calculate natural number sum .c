#include<stdio.h>
#include<conio.h>
int main()
{
    int n ,i=0,sum=0;

    printf("\n Enter a number :");
    scanf("\n %d",&n);

    for(i=0;i<=n;i++)
    {
        sum=sum+i;

        printf("\n %d",sum);
    }
    printf("\n\n Sum of the given number is :%d",sum);
    getch();
    return 0;
}
