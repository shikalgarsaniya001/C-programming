#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    for(i=1;i<=num;i++)
    {
        printf("\n %d",i);
    }
    getch();
    return 0;

}
