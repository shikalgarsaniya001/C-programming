/* Write Program to make sum of numbers till user enter zero or negative number.
(Use beak/continue & unconditional loop).*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no,sum;

   for(i=1;;i++)
   {
       printf("\n Enter a number %d:",i);
       scanf("\n %d",&no);
       if(no<=0)
       {
           break;
       }
       sum=sum+no;

   }
   printf("\n sum of the given number is %d",sum);

   printf("\n Enter number is %d",i);

   getch();
   return 0;
}
