
/*Write a program to print the reverse multiplication table of a given number.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i, no ,result;
     printf("\n Enter a number :");
     scanf("\n %d",&no);

    for(i=10;i>=1;i--)
    {
    result = no*i;

     printf("\n %d",result);

    }
    getch();
    return 0;
}
