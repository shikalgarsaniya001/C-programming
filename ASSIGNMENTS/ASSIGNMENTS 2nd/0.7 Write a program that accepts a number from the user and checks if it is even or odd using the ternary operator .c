#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

    printf("\n Enter a number :");
    scanf("\n %d",&num);

    (num%2==0)? printf("\n The given number %d is Even ",num): printf("\n The given number %d is odd",num);

    getch();
    return 0;

}
