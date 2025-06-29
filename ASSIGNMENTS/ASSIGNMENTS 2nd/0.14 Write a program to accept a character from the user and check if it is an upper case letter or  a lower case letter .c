#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("\n Enter a character :");
    scanf("\n %c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n The given character %c is UPPER CASE",ch);
    }
    else if (ch>='a' && ch<='z')
    {
        printf("\n The given character %c is LOWER CASE",ch);
    }
    else

    {
        printf("\n The given character %c is not a letter",ch);
    }
    getch();
    return 0;
}
