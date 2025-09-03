#include<stdio.h>
#include<conio.h>
int main()
{
    int i,x,sum;
    printf("\n Enter a number :");
    scanf("\n %d",&x);

    for(i=x; i>=1;i--)
    {
        sum=sum+i;
        printf("\n %d + %d =%d",sum,i,sum);
    }
    printf("\n Sum of the given number is %d",sum);

    getch();
    return 0;
}
