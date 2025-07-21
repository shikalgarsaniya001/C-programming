
 /*11. Write Program to find maximum no. from 7 inputted numbers.
Input: Enter 7 numbers: 3, 1, 4, 1, 5, 9, 2
Output: The maximum number is: 9*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no,max;

for(i=1; i<=7;i++)
{
    printf("\n Enter a number %d:",i);
    scanf("\n %d",&no);

    if(no>max)
    {
        max=no;
    }
}
printf("\n Maximum number is %d",max);

getch();
return 0;
}
