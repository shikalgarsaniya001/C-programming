 /*Write Program to find minimum & maximum no. from 10 inputted numbers.
Input: Enter 10 numbers: 3, 7, 4, 8, 5, 9, 2, 6, 5, 3
Output: Minimum number is: 2, Maximum number is: 9*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no,min,max;

    for(i=1;i<=10;i++)
    {
        printf("\n\n Entera number %d:",i);
        scanf("\n %d",&no);

        if(no>max)
        {
            max=no;
        }
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
    printf("\n\n The maximum number is %d",max);

    printf("\n\n The minimum number is %d",min);


    getch();
    return 0;


}
