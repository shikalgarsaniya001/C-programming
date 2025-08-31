#include<stdio.h>
#include<conio.h>
int main()
{
     /*   for( int i=10;i>=1;i--)
        {
            printf("\n %d",i);
        }
        getch();
        return 0;*/

   int x;

   printf("\n Enter a number :");
   scanf("\n %d",&x);

   for(int i=x;i>=1;i--)
   {
       printf("\n %d",i);
   }
   getch();
   return 0;

}
