#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a character :");
    scanf("%c",&ch);

    if(ch>='A' && ch<='z' || ch>='a' &&ch<='z')
    {
        printf("\n TRUE");
    }
    else
    {
        printf("\n FALSE");
    }
    getch();
    return 0;
}
