/*Create a program to print the multiplication table of a given number. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no;
        printf("\n Enter a number:");
        scanf("\n %d",&no);


    for(int i=1;i<=10;i++)
    {

       printf("\n %d *%d =%d",no,i,no*i);

    }

    getch();
    return 0;
}
