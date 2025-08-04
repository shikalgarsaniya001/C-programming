#include<stdio.h>
#include<conio.h>
int main()
{
      char ch;

      printf("\n Enter a character:");
      scanf("\n %c",&ch);

      if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o' || ch=='u')
      {
          printf("\n %c is vowel",ch);
      }
      else
      {
          printf("\n %c is not vowel",ch);
      }
      getch();
      return 0;
}
