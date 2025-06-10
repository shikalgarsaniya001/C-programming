#include<stdio.h>
#include<conio.h>
int main()
{
    int num, sqrRoot;
    printf("\n __________________________________________________");

    printf("\n Enter a number :");

    scanf("\n %d",&num);

    sqrRoot= sqrt(num);

    printf("\n The square root of the given number %d",sqrRoot);

    printf("\n __________________________________________________");

    getch();
    return 0;


}


