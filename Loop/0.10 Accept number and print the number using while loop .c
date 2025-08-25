#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0 ,N;

    printf("\n Enter a number :");
    scanf("\n %d",&N);

    while(i<=N)
    {
        printf("\n %d",i);
        i++;
    }
    getch();
    return 0;
}
