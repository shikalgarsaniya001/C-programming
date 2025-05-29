
#include<stdio.h>
#include<conio.h>
int main()
{
     int No1, No2,No3, Tolmarks ;
     float percentage= 0.0;
     printf("\n***************************************");

      printf("\n Enter a marks subject 1 :");
      scanf("\n %d",&No1);

      printf("\n Enter a marks subject 2 :");
      scanf("\n %d",&No2);

      printf("\n Enter a marks subject 3 :");
      scanf("\n %d",&No3);

      printf("\n***************************************");

      Tolmarks = No1 + No2 + No3;

      percentage= (float)Tolmarks/3;

      printf("\n Total number of the given marks  is :%d  ",Tolmarks);

      printf("\n percentage of the  given marks  is :%f  ",percentage);

      printf("\n***************************************");








    return 0;

}


