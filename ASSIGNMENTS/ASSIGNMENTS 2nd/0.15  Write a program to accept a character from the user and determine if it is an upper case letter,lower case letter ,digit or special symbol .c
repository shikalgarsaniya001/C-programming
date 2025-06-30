#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("\n %c",&ch);

  if(ch>='A'&& ch<='Z')
    {
        printf("\n The character %c is Upper case",ch);
    }
    else if( ch>='a' && ch<='z')
    {
        printf("\n The character %c is Lower case",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n The given character %c is DIGIT",ch);
    }
    else
    {
        printf("\n The given character %c is a SYMBOL",ch);
    }
    getch();
    return 0;

}
