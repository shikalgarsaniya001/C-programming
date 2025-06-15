#include<stdio.h>
#include<conio.h>
int main()
{
    int num;

     printf("\n Enter a number :");
     scanf("\n %d",&num);

     if(num%2==0)
     {
         printf("\n The given number is %d is even ",num);
     }
     else
     {
         printf("\n The given number is %d is odd ",num);
     }
     getch();
     return 0;
}
