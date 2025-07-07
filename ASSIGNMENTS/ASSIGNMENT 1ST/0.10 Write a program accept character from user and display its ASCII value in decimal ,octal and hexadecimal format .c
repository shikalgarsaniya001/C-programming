#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("\n %c",&ch);

    printf("\n Decimal valude : %d",ch);

    printf("\n Octal value : %o",ch);

    printf("\n hexadecimal value : %x",ch);

    getch();
    return 0;
}
