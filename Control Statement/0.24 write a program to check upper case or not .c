#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("\n %c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n %c is Upper case letter",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n %c is Lower case",ch);
    }
    else
    {
        printf("\n  %c is Special symbol and digit",ch);
    }
    getch();
    return 0;
}
