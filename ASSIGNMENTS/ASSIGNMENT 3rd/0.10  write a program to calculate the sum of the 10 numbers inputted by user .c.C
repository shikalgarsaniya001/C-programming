/*
Write a program to calculate the sum of 10 numbers inputted by the user.
Input: Enter 10 numbers: 3, 7, 4, 8, 5, 9, 2, 6, 5, 3
Output: The sum is: 52
*/


#include<stdio.h>
#include<conio.h>
int main()
{

int i ,num,sum;

  for(i=1;i<=10;i++)
  {
      printf("\n\n Enter a number %d:",i);
      scanf("\n\n %d",&num);

      sum = sum + num;

  }
      printf("\n SUM of the given number %d",sum);
  getch();
  return 0;
}
