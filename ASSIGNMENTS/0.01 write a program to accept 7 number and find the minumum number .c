/*Write Program to find minimum no. from 7 inputted numbers.
Input: Enter 7 numbers: 3, 1, 4, 1, 5, 9, 2
Output: The minimum number is: 1 */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no,min;

    for(i=1;i<=7;i++)
    {
        printf("\n Enter a number %d:",i);
        scanf("\n %d",&no);

      if(i==1)
      {
       min=no;

      }
        else
        {
            if(no<min)
            {
                 min=no;
            }

        }

    }
    printf("\n Minimum number is %d",min);

    getch();
    return 0;

}
