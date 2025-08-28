#include<stdio.h>
#include<conio.h>
int main()
{
    int  i=0, n;

    printf("\n Enter a number:");
    scanf("\n %d",&n);

    do
    {
        printf("\n %d",i);
        i++;
    }
    while(i<=n);
    getch();
    return 0;

}
