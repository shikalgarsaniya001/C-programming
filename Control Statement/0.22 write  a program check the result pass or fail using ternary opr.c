#include<stdio.h>
#include<conio.h>
int main()
{
    int marks;

    printf("\n Enter a marks:");
    scanf("\n %d",&marks);

    marks>=30 && marks<=100 ? printf("\n pass"):printf("\n fail");

    return 0;

}
