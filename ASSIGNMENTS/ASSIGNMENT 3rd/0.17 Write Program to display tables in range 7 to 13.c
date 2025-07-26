 /*Write Program to display tables in range 7 to 13.*/

 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i,a,result;

        for(i=7;i<=13;i++)

     {
          printf("\n\n Table of %d",i);
         for(a=1;a<=10;a++)
         {
            result= i*a;

            printf("\n %d * %d= %d",i,a,result);

         }

     }
 }
