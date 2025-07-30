#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    num%2==0 ? printf("\n %d is even number",num):printf("\n %d is odd number",num);

    getch();
    return 0;
}
